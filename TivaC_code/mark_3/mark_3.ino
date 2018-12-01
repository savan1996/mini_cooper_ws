#include <ros.h>
#include <geometry_msgs/Vector3.h>
#include <std_msgs/String.h>

#define sm_ina 9      //pa_6
#define sm_inb 10     //pa_7
#define sm_pwm 36     //pc_5

#define dm_ina 12     //pa_3
#define dm_inb 13     //pa_4
#define dm_pwm 37     //pc_4

ros::NodeHandle_<TivaCHardware,2,2,512,512> TivaC;

std_msgs::String str_msg;
ros::Publisher tc_pub("vehicle_data", &str_msg);


int steering_mid = 0;
volatile int counter1 = 0;
volatile int counter2 = 0;
char direct= 's';

volatile int throttle=0;
volatile int steering=0;
char to_ros[8];

void rc_callback(const geometry_msgs::Vector3& remote_control)
{
  steering=int(remote_control.x);
  throttle=int(remote_control.y);

  if(throttle>10)
  {
    digitalWrite(dm_ina,HIGH);
    digitalWrite(dm_inb,LOW);
    analogWrite(dm_pwm,throttle);
  }
  else if(throttle<-10)
  {
    digitalWrite(dm_ina,LOW);
    digitalWrite(dm_inb,HIGH);
    analogWrite(dm_pwm,abs(throttle));
  }
  else
  {
    digitalWrite(dm_ina,HIGH);
    digitalWrite(dm_inb,LOW);
    analogWrite(dm_pwm,0);
  }
  
  if(steering>10)
  {
    digitalWrite(sm_ina,HIGH);
    digitalWrite(sm_inb,LOW);
    analogWrite(sm_pwm,steering);
  }
  else if(steering<-10)
  {
    digitalWrite(sm_ina,LOW);
    digitalWrite(sm_inb,HIGH);
    analogWrite(sm_pwm,abs(steering));
  }

  
}


ros::Subscriber<geometry_msgs::Vector3> sub("remote_controller", &rc_callback);

void setup() 
{
  TivaC.getHardware()->setBaud(115200);
   
  Serial.begin(115200);
  pinMode(sm_ina,OUTPUT);
  pinMode(sm_inb,OUTPUT);
  pinMode(sm_pwm,OUTPUT);

  pinMode(dm_ina,OUTPUT);
  pinMode(dm_inb,OUTPUT);
  pinMode(dm_pwm,OUTPUT);

  analogReadResolution(10);

  steering_calibration();
  steering_mid=(counter1+counter2)/2;
  recenter();

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
  digitalWrite(sm_ina, HIGH);
  digitalWrite(sm_inb, LOW);
  analogWrite(sm_pwm, 150);
  delay(1200);
  counter1=analogRead(A3);
  digitalWrite(sm_ina, LOW);
  digitalWrite(sm_inb, HIGH);
  analogWrite(sm_pwm, 150);
  delay(1200);
  counter2=analogRead(A3);
}



void recenter()
{
  while(analogRead(A3) != steering_mid-15)
  {
    if(analogRead(A3) < steering_mid-20)
    {
      digitalWrite(sm_ina, HIGH);
      digitalWrite(sm_inb, LOW);
      analogWrite(sm_pwm, 70);
    }
    else if(analogRead(A3) > steering_mid+30)
    {
      digitalWrite(sm_ina, LOW);
      digitalWrite(sm_inb, HIGH);
      analogWrite(sm_pwm, 65);
    }
    else
    {
      break;
    }
  }
  digitalWrite(sm_ina, LOW);
  digitalWrite(sm_inb, LOW);
  analogWrite(sm_pwm,0);
}


