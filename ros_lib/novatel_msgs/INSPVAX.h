#ifndef _ROS_novatel_msgs_INSPVAX_h
#define _ROS_novatel_msgs_INSPVAX_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "novatel_msgs/CommonHeader.h"

namespace novatel_msgs
{

  class INSPVAX : public ros::Msg
  {
    public:
      novatel_msgs::CommonHeader header;
      uint32_t ins_status;
      uint32_t position_type;
      double latitude;
      double longitude;
      double altitude;
      float undulation;
      double north_velocity;
      double east_velocity;
      double up_velocity;
      double roll;
      double pitch;
      double azimuth;
      float latitude_std;
      float longitude_std;
      float altitude_std;
      float north_velocity_std;
      float east_velocity_std;
      float up_velocity_std;
      float roll_std;
      float pitch_std;
      float azimuth_std;
      uint32_t extended_status;
      uint16_t seconds_since_update;
      enum { INS_STATUS_INACTIVE = 0 };
      enum { INS_STATUS_ALIGNING = 1 };
      enum { INS_STATUS_HIGH_VARIANCE = 2 };
      enum { INS_STATUS_SOLUTION_GOOD = 3 };
      enum { INS_STATUS_SOLUTION_FREE = 6 };
      enum { INS_STATUS_ALIGNMENT_COMPLETE = 7 };
      enum { INS_STATUS_DETERMINING_ORIENTATION = 8 };
      enum { INS_STATUS_WAITING_INITIALPOS = 9 };
      enum { POSITION_TYPE_NONE = 0 };
      enum { POSITION_TYPE_SBAS = 52 };
      enum { POSITION_TYPE_PSEUDORANGE_SINGLE_POINT = 53 };
      enum { POSITION_TYPE_PSEUDORANGE_DIFFERENTIAL = 54 };
      enum { POSITION_TYPE_RTK_FLOAT = 55 };
      enum { POSITION_TYPE_RTK_FIXED = 56 };
      enum { POSITION_TYPE_OMNISTAR = 57 };
      enum { POSITION_TYPE_OMNISTAR_HP = 58 };
      enum { POSITION_TYPE_OMNISTAR_XP = 59 };
      enum { POSITION_TYPE_PPP_CONVERGING = 73 };
      enum { POSITION_TYPE_PPP = 74 };
      enum { EXTENDED_STATUS_POSITION_UPDATE_APPLIED = 1 };
      enum { EXTENDED_STATUS_PHASE_UPDATE_APPLIED = 2 };
      enum { EXTENDED_STATUS_ZUPT_APPLIED = 4 };
      enum { EXTENDED_STATUS_WHEEL_SENSOR_APPLIED = 8 };
      enum { EXTENDED_STATUS_HEADING_UPDATE_APPLIED = 16 };
      enum { EXTENDED_STATUS_INS_SOLUTION_CONVERGED = 64 };

    INSPVAX():
      header(),
      ins_status(0),
      position_type(0),
      latitude(0),
      longitude(0),
      altitude(0),
      undulation(0),
      north_velocity(0),
      east_velocity(0),
      up_velocity(0),
      roll(0),
      pitch(0),
      azimuth(0),
      latitude_std(0),
      longitude_std(0),
      altitude_std(0),
      north_velocity_std(0),
      east_velocity_std(0),
      up_velocity_std(0),
      roll_std(0),
      pitch_std(0),
      azimuth_std(0),
      extended_status(0),
      seconds_since_update(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->ins_status >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ins_status >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ins_status >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ins_status >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ins_status);
      *(outbuffer + offset + 0) = (this->position_type >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->position_type >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->position_type >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->position_type >> (8 * 3)) & 0xFF;
      offset += sizeof(this->position_type);
      union {
        double real;
        uint64_t base;
      } u_latitude;
      u_latitude.real = this->latitude;
      *(outbuffer + offset + 0) = (u_latitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_latitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_latitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_latitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_latitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_latitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_latitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_latitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->latitude);
      union {
        double real;
        uint64_t base;
      } u_longitude;
      u_longitude.real = this->longitude;
      *(outbuffer + offset + 0) = (u_longitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_longitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_longitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_longitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_longitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_longitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_longitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_longitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->longitude);
      union {
        double real;
        uint64_t base;
      } u_altitude;
      u_altitude.real = this->altitude;
      *(outbuffer + offset + 0) = (u_altitude.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_altitude.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_altitude.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_altitude.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_altitude.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_altitude.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_altitude.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_altitude.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->altitude);
      union {
        float real;
        uint32_t base;
      } u_undulation;
      u_undulation.real = this->undulation;
      *(outbuffer + offset + 0) = (u_undulation.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_undulation.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_undulation.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_undulation.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->undulation);
      union {
        double real;
        uint64_t base;
      } u_north_velocity;
      u_north_velocity.real = this->north_velocity;
      *(outbuffer + offset + 0) = (u_north_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_north_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_north_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_north_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_north_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_north_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_north_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_north_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->north_velocity);
      union {
        double real;
        uint64_t base;
      } u_east_velocity;
      u_east_velocity.real = this->east_velocity;
      *(outbuffer + offset + 0) = (u_east_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_east_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_east_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_east_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_east_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_east_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_east_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_east_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->east_velocity);
      union {
        double real;
        uint64_t base;
      } u_up_velocity;
      u_up_velocity.real = this->up_velocity;
      *(outbuffer + offset + 0) = (u_up_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_up_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_up_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_up_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_up_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_up_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_up_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_up_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->up_velocity);
      union {
        double real;
        uint64_t base;
      } u_roll;
      u_roll.real = this->roll;
      *(outbuffer + offset + 0) = (u_roll.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_roll.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_roll.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_roll.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_roll.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_roll.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_roll.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_roll.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->roll);
      union {
        double real;
        uint64_t base;
      } u_pitch;
      u_pitch.real = this->pitch;
      *(outbuffer + offset + 0) = (u_pitch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitch.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pitch.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pitch.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pitch.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pitch.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pitch);
      union {
        double real;
        uint64_t base;
      } u_azimuth;
      u_azimuth.real = this->azimuth;
      *(outbuffer + offset + 0) = (u_azimuth.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_azimuth.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_azimuth.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_azimuth.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_azimuth.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_azimuth.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_azimuth.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_azimuth.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->azimuth);
      union {
        float real;
        uint32_t base;
      } u_latitude_std;
      u_latitude_std.real = this->latitude_std;
      *(outbuffer + offset + 0) = (u_latitude_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_latitude_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_latitude_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_latitude_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->latitude_std);
      union {
        float real;
        uint32_t base;
      } u_longitude_std;
      u_longitude_std.real = this->longitude_std;
      *(outbuffer + offset + 0) = (u_longitude_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_longitude_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_longitude_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_longitude_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->longitude_std);
      union {
        float real;
        uint32_t base;
      } u_altitude_std;
      u_altitude_std.real = this->altitude_std;
      *(outbuffer + offset + 0) = (u_altitude_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_altitude_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_altitude_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_altitude_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->altitude_std);
      union {
        float real;
        uint32_t base;
      } u_north_velocity_std;
      u_north_velocity_std.real = this->north_velocity_std;
      *(outbuffer + offset + 0) = (u_north_velocity_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_north_velocity_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_north_velocity_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_north_velocity_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->north_velocity_std);
      union {
        float real;
        uint32_t base;
      } u_east_velocity_std;
      u_east_velocity_std.real = this->east_velocity_std;
      *(outbuffer + offset + 0) = (u_east_velocity_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_east_velocity_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_east_velocity_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_east_velocity_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->east_velocity_std);
      union {
        float real;
        uint32_t base;
      } u_up_velocity_std;
      u_up_velocity_std.real = this->up_velocity_std;
      *(outbuffer + offset + 0) = (u_up_velocity_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_up_velocity_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_up_velocity_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_up_velocity_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->up_velocity_std);
      union {
        float real;
        uint32_t base;
      } u_roll_std;
      u_roll_std.real = this->roll_std;
      *(outbuffer + offset + 0) = (u_roll_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_roll_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_roll_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_roll_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->roll_std);
      union {
        float real;
        uint32_t base;
      } u_pitch_std;
      u_pitch_std.real = this->pitch_std;
      *(outbuffer + offset + 0) = (u_pitch_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitch_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitch_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitch_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pitch_std);
      union {
        float real;
        uint32_t base;
      } u_azimuth_std;
      u_azimuth_std.real = this->azimuth_std;
      *(outbuffer + offset + 0) = (u_azimuth_std.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_azimuth_std.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_azimuth_std.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_azimuth_std.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->azimuth_std);
      *(outbuffer + offset + 0) = (this->extended_status >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->extended_status >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->extended_status >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->extended_status >> (8 * 3)) & 0xFF;
      offset += sizeof(this->extended_status);
      *(outbuffer + offset + 0) = (this->seconds_since_update >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->seconds_since_update >> (8 * 1)) & 0xFF;
      offset += sizeof(this->seconds_since_update);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->ins_status =  ((uint32_t) (*(inbuffer + offset)));
      this->ins_status |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->ins_status |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->ins_status |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->ins_status);
      this->position_type =  ((uint32_t) (*(inbuffer + offset)));
      this->position_type |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->position_type |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->position_type |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->position_type);
      union {
        double real;
        uint64_t base;
      } u_latitude;
      u_latitude.base = 0;
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_latitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->latitude = u_latitude.real;
      offset += sizeof(this->latitude);
      union {
        double real;
        uint64_t base;
      } u_longitude;
      u_longitude.base = 0;
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_longitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->longitude = u_longitude.real;
      offset += sizeof(this->longitude);
      union {
        double real;
        uint64_t base;
      } u_altitude;
      u_altitude.base = 0;
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_altitude.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->altitude = u_altitude.real;
      offset += sizeof(this->altitude);
      union {
        float real;
        uint32_t base;
      } u_undulation;
      u_undulation.base = 0;
      u_undulation.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_undulation.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_undulation.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_undulation.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->undulation = u_undulation.real;
      offset += sizeof(this->undulation);
      union {
        double real;
        uint64_t base;
      } u_north_velocity;
      u_north_velocity.base = 0;
      u_north_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_north_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_north_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_north_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_north_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_north_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_north_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_north_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->north_velocity = u_north_velocity.real;
      offset += sizeof(this->north_velocity);
      union {
        double real;
        uint64_t base;
      } u_east_velocity;
      u_east_velocity.base = 0;
      u_east_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_east_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_east_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_east_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_east_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_east_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_east_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_east_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->east_velocity = u_east_velocity.real;
      offset += sizeof(this->east_velocity);
      union {
        double real;
        uint64_t base;
      } u_up_velocity;
      u_up_velocity.base = 0;
      u_up_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_up_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_up_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_up_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_up_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_up_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_up_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_up_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->up_velocity = u_up_velocity.real;
      offset += sizeof(this->up_velocity);
      union {
        double real;
        uint64_t base;
      } u_roll;
      u_roll.base = 0;
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_roll.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->roll = u_roll.real;
      offset += sizeof(this->roll);
      union {
        double real;
        uint64_t base;
      } u_pitch;
      u_pitch.base = 0;
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pitch.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pitch = u_pitch.real;
      offset += sizeof(this->pitch);
      union {
        double real;
        uint64_t base;
      } u_azimuth;
      u_azimuth.base = 0;
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->azimuth = u_azimuth.real;
      offset += sizeof(this->azimuth);
      union {
        float real;
        uint32_t base;
      } u_latitude_std;
      u_latitude_std.base = 0;
      u_latitude_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_latitude_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_latitude_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_latitude_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->latitude_std = u_latitude_std.real;
      offset += sizeof(this->latitude_std);
      union {
        float real;
        uint32_t base;
      } u_longitude_std;
      u_longitude_std.base = 0;
      u_longitude_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_longitude_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_longitude_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_longitude_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->longitude_std = u_longitude_std.real;
      offset += sizeof(this->longitude_std);
      union {
        float real;
        uint32_t base;
      } u_altitude_std;
      u_altitude_std.base = 0;
      u_altitude_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_altitude_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_altitude_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_altitude_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->altitude_std = u_altitude_std.real;
      offset += sizeof(this->altitude_std);
      union {
        float real;
        uint32_t base;
      } u_north_velocity_std;
      u_north_velocity_std.base = 0;
      u_north_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_north_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_north_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_north_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->north_velocity_std = u_north_velocity_std.real;
      offset += sizeof(this->north_velocity_std);
      union {
        float real;
        uint32_t base;
      } u_east_velocity_std;
      u_east_velocity_std.base = 0;
      u_east_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_east_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_east_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_east_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->east_velocity_std = u_east_velocity_std.real;
      offset += sizeof(this->east_velocity_std);
      union {
        float real;
        uint32_t base;
      } u_up_velocity_std;
      u_up_velocity_std.base = 0;
      u_up_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_up_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_up_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_up_velocity_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->up_velocity_std = u_up_velocity_std.real;
      offset += sizeof(this->up_velocity_std);
      union {
        float real;
        uint32_t base;
      } u_roll_std;
      u_roll_std.base = 0;
      u_roll_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_roll_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_roll_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_roll_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->roll_std = u_roll_std.real;
      offset += sizeof(this->roll_std);
      union {
        float real;
        uint32_t base;
      } u_pitch_std;
      u_pitch_std.base = 0;
      u_pitch_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitch_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitch_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitch_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pitch_std = u_pitch_std.real;
      offset += sizeof(this->pitch_std);
      union {
        float real;
        uint32_t base;
      } u_azimuth_std;
      u_azimuth_std.base = 0;
      u_azimuth_std.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_azimuth_std.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_azimuth_std.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_azimuth_std.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->azimuth_std = u_azimuth_std.real;
      offset += sizeof(this->azimuth_std);
      this->extended_status =  ((uint32_t) (*(inbuffer + offset)));
      this->extended_status |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->extended_status |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->extended_status |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->extended_status);
      this->seconds_since_update =  ((uint16_t) (*(inbuffer + offset)));
      this->seconds_since_update |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->seconds_since_update);
     return offset;
    }

    const char * getType(){ return "novatel_msgs/INSPVAX"; };
    const char * getMD5(){ return "b5d66747957184042a6cca9b7368742f"; };

  };

}
#endif