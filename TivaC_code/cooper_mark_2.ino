#include <ros.h>
#include <geometry_msgs/Vector3.h>
#include <std_msgs/String.h>

#define de_pin_a 31   //pf_4
#define de_pin_b 32   //pd_7
#define se_pin_a 35   //pc_6
#define se_pin_b 34   //pc_7

#define sm_ina 9      //pa_6
#define sm_inb 10     //pa_7
#define sm_pwm 36     //pc_5

#define dm_ina 12     //pa_3
#define dm_inb 13     //pa_4
#define dm_pwm 37     //pc_4

ros::NodeHandle TivaC;

std_msgs::String str_msg;
ros::Publisher tc_pub("vehicle_data", &str_msg);

int calib=0;
int steering_mid=0;
volatile int steering_pulse_counter=0;
volatile char steering_direction;

volatile int drive_pulse_counter=0;
volatile char drive_direction;
volatile int drive_encoder_revolutions=0;
volatile int last_vel_time=0;
volatile float distance_driven=0;
volatile float total_distance_driven=0;
volatile float driving_speed_kph=0;
volatile float driving_speed_mph=0;

volatile int throttle=0;
volatile int steering=0;
char to_ros[8];

void rc_callback(const geometry_msgs::Vector3& remote_control)
{
  steering=int(remote_control.x);
  throttle=int(remote_control.y);
  if(throttle>0.05)
  {
    digitalWrite(dm_ina,HIGH);
    digitalWrite(dm_inb,LOW);
    analogWrite(dm_pwm,175);
  }
  else if(throttle<-0.05)
  {
    digitalWrite(dm_ina,LOW);
    digitalWrite(dm_inb,HIGH);
    analogWrite(dm_pwm,175);
  }
  else
  {
    digitalWrite(dm_ina,HIGH);
    digitalWrite(dm_inb,LOW);
    analogWrite(dm_pwm,0);
  }
  if(steering>0.05)
  {
    digitalWrite(sm_ina,HIGH);
    digitalWrite(sm_inb,LOW);
    analogWrite(sm_pwm,100);
  }
  else if(steering<-0.05)
  {
    digitalWrite(sm_ina,LOW);
    digitalWrite(sm_inb,HIGH);
    analogWrite(sm_pwm,100);
  }
  else
  {
    digitalWrite(sm_ina,HIGH);
    digitalWrite(sm_inb,LOW);
    analogWrite(sm_pwm,0);
  }
}

ros::Subscriber<geometry_msgs::Vector3> sub("remote_controller", &rc_callback);

void setup()
{
  TivaC.getHardware()->setBaud(115200);
  pinMode(de_pin_a, INPUT_PULLUP);
  pinMode(de_pin_b, INPUT_PULLUP);
  attachInterrupt(de_pin_a, handle_drive_encoder,RISING);

  pinMode(se_pin_a, INPUT_PULLUP);
  pinMode(se_pin_b, INPUT_PULLUP);
  attachInterrupt(se_pin_a, handle_steering_encoder,RISING);

  pinMode(sm_ina,OUTPUT);
  pinMode(sm_inb,OUTPUT);
  pinMode(sm_pwm,OUTPUT);

  pinMode(dm_ina,OUTPUT);
  pinMode(dm_inb,OUTPUT);
  pinMode(dm_pwm,OUTPUT);

  steering_calibration();
  steering_mid=steering_pulse_counter/2;
  steering_pulse_counter=0;

  while(abs(steering_pulse_counter) != int(steering_mid))
  {
    if(steering_pulse_counter < steering_mid)
    {
      digitalWrite(sm_ina,HIGH);
      digitalWrite(sm_inb,LOW);
      analogWrite(sm_pwm, 100);
      delay(1);
    }
    else if(steering_pulse_counter > steering_mid)
    {
      digitalWrite(sm_ina,LOW);
      digitalWrite(sm_inb,HIGH);
      analogWrite(sm_pwm, 100);
      delay(1);
    }
  }
  digitalWrite(sm_ina,LOW);
  digitalWrite(sm_inb,HIGH);
  analogWrite(sm_pwm,0);
  steering_pulse_counter=0;
  calib=0;

  TivaC.initNode();
  TivaC.advertise(tc_pub);
  TivaC.subscribe(sub);
}

void loop()
{
   String final_data="";
   final_data+= throttle;
   final_data.concat(',');
   final_data+= steering;
   final_data.toCharArray(to_ros,11);
   str_msg.data=to_ros;
   tc_pub.publish(&str_msg);
   TivaC.spinOnce();
   delay(50);
}

void steering_calibration()
{
  calib=1;
  noInterrupts();
  digitalWrite(sm_ina,HIGH);
  digitalWrite(sm_inb,LOW);
  analogWrite(sm_pwm,100);
  delay(1000);
  interrupts();
  digitalWrite(sm_ina,LOW);
  digitalWrite(sm_inb,HIGH);
  analogWrite(sm_pwm,100);
  delay(1000);
  calib=0;
}

void handle_steering_encoder()
{
  if(calib==1)
  {
    steering_pulse_counter++;
  }
  else if(calib==0)
  {
    if (digitalRead(se_pin_b)==HIGH)
    {
      steering_direction='R';
      steering_pulse_counter++;
    }
    else if(digitalRead(se_pin_b)==LOW)
    {
      steering_direction='L';
      steering_pulse_counter--;
    }
  }
}

void handle_drive_encoder()
{
  if (digitalRead(de_pin_b)==HIGH)
  {
    drive_direction='F';
    drive_pulse_counter++;
    calculate_speed();
  }
  else if (digitalRead(de_pin_b)==LOW)
  {
    drive_direction='B';
    drive_pulse_counter--;
    calculate_speed();
  }
}

void calculate_speed()
{
  if(drive_pulse_counter==600 || drive_pulse_counter== -600)
  {
    drive_encoder_revolutions++;
    drive_pulse_counter=0;
    if (millis()-200 > last_vel_time)
    {
      noInterrupts();
      distance_driven= (drive_encoder_revolutions*3.142*235)/13;
      total_distance_driven=total_distance_driven + distance_driven;
      driving_speed_kph=distance_driven/((millis()-last_vel_time)*0.001);
      driving_speed_kph=(driving_speed_kph*3.6)/1000;
      last_vel_time=millis();
      drive_encoder_revolutions=0;
      interrupts();
    }
  }
}

