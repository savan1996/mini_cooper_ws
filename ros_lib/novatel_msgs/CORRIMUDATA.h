#ifndef _ROS_novatel_msgs_CORRIMUDATA_h
#define _ROS_novatel_msgs_CORRIMUDATA_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "novatel_msgs/CommonHeader.h"

namespace novatel_msgs
{

  class CORRIMUDATA : public ros::Msg
  {
    public:
      novatel_msgs::CommonHeader header;
      int32_t week;
      double gpssec;
      double pitch_rate;
      double roll_rate;
      double yaw_rate;
      double x_accel;
      double y_accel;
      double z_accel;

    CORRIMUDATA():
      header(),
      week(0),
      gpssec(0),
      pitch_rate(0),
      roll_rate(0),
      yaw_rate(0),
      x_accel(0),
      y_accel(0),
      z_accel(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_week;
      u_week.real = this->week;
      *(outbuffer + offset + 0) = (u_week.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_week.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_week.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_week.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->week);
      union {
        double real;
        uint64_t base;
      } u_gpssec;
      u_gpssec.real = this->gpssec;
      *(outbuffer + offset + 0) = (u_gpssec.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gpssec.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gpssec.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gpssec.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gpssec.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gpssec.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gpssec.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gpssec.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gpssec);
      union {
        double real;
        uint64_t base;
      } u_pitch_rate;
      u_pitch_rate.real = this->pitch_rate;
      *(outbuffer + offset + 0) = (u_pitch_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitch_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitch_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitch_rate.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pitch_rate.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pitch_rate.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pitch_rate.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pitch_rate.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pitch_rate);
      union {
        double real;
        uint64_t base;
      } u_roll_rate;
      u_roll_rate.real = this->roll_rate;
      *(outbuffer + offset + 0) = (u_roll_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_roll_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_roll_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_roll_rate.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_roll_rate.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_roll_rate.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_roll_rate.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_roll_rate.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->roll_rate);
      union {
        double real;
        uint64_t base;
      } u_yaw_rate;
      u_yaw_rate.real = this->yaw_rate;
      *(outbuffer + offset + 0) = (u_yaw_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yaw_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yaw_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yaw_rate.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yaw_rate.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yaw_rate.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yaw_rate.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yaw_rate.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yaw_rate);
      union {
        double real;
        uint64_t base;
      } u_x_accel;
      u_x_accel.real = this->x_accel;
      *(outbuffer + offset + 0) = (u_x_accel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x_accel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x_accel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x_accel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_x_accel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_x_accel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_x_accel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_x_accel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->x_accel);
      union {
        double real;
        uint64_t base;
      } u_y_accel;
      u_y_accel.real = this->y_accel;
      *(outbuffer + offset + 0) = (u_y_accel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y_accel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y_accel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y_accel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_y_accel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_y_accel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_y_accel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_y_accel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->y_accel);
      union {
        double real;
        uint64_t base;
      } u_z_accel;
      u_z_accel.real = this->z_accel;
      *(outbuffer + offset + 0) = (u_z_accel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_z_accel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_z_accel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_z_accel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_z_accel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_z_accel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_z_accel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_z_accel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->z_accel);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_week;
      u_week.base = 0;
      u_week.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_week.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_week.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_week.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->week = u_week.real;
      offset += sizeof(this->week);
      union {
        double real;
        uint64_t base;
      } u_gpssec;
      u_gpssec.base = 0;
      u_gpssec.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gpssec.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gpssec.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gpssec.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gpssec.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gpssec.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gpssec.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gpssec.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gpssec = u_gpssec.real;
      offset += sizeof(this->gpssec);
      union {
        double real;
        uint64_t base;
      } u_pitch_rate;
      u_pitch_rate.base = 0;
      u_pitch_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitch_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitch_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitch_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pitch_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pitch_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pitch_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pitch_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pitch_rate = u_pitch_rate.real;
      offset += sizeof(this->pitch_rate);
      union {
        double real;
        uint64_t base;
      } u_roll_rate;
      u_roll_rate.base = 0;
      u_roll_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_roll_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_roll_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_roll_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_roll_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_roll_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_roll_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_roll_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->roll_rate = u_roll_rate.real;
      offset += sizeof(this->roll_rate);
      union {
        double real;
        uint64_t base;
      } u_yaw_rate;
      u_yaw_rate.base = 0;
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yaw_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yaw_rate = u_yaw_rate.real;
      offset += sizeof(this->yaw_rate);
      union {
        double real;
        uint64_t base;
      } u_x_accel;
      u_x_accel.base = 0;
      u_x_accel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x_accel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x_accel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x_accel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_x_accel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_x_accel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_x_accel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_x_accel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->x_accel = u_x_accel.real;
      offset += sizeof(this->x_accel);
      union {
        double real;
        uint64_t base;
      } u_y_accel;
      u_y_accel.base = 0;
      u_y_accel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y_accel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y_accel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y_accel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_y_accel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_y_accel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_y_accel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_y_accel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->y_accel = u_y_accel.real;
      offset += sizeof(this->y_accel);
      union {
        double real;
        uint64_t base;
      } u_z_accel;
      u_z_accel.base = 0;
      u_z_accel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_z_accel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_z_accel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_z_accel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_z_accel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_z_accel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_z_accel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_z_accel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->z_accel = u_z_accel.real;
      offset += sizeof(this->z_accel);
     return offset;
    }

    const char * getType(){ return "novatel_msgs/CORRIMUDATA"; };
    const char * getMD5(){ return "8ca3f26f898322425170fe621393f009"; };

  };

}
#endif