#ifndef _ROS_novatel_msgs_INSCOV_h
#define _ROS_novatel_msgs_INSCOV_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "novatel_msgs/CommonHeader.h"

namespace novatel_msgs
{

  class INSCOV : public ros::Msg
  {
    public:
      novatel_msgs::CommonHeader header;
      int32_t week;
      double gpssec;
      double pos11;
      double pos12;
      double pos13;
      double pos21;
      double pos22;
      double pos23;
      double pos31;
      double pos32;
      double pos33;
      double att11;
      double att12;
      double att13;
      double att21;
      double att22;
      double att23;
      double att31;
      double att32;
      double att33;
      double vel11;
      double vel12;
      double vel13;
      double vel21;
      double vel22;
      double vel23;
      double vel31;
      double vel32;
      double vel33;

    INSCOV():
      header(),
      week(0),
      gpssec(0),
      pos11(0),
      pos12(0),
      pos13(0),
      pos21(0),
      pos22(0),
      pos23(0),
      pos31(0),
      pos32(0),
      pos33(0),
      att11(0),
      att12(0),
      att13(0),
      att21(0),
      att22(0),
      att23(0),
      att31(0),
      att32(0),
      att33(0),
      vel11(0),
      vel12(0),
      vel13(0),
      vel21(0),
      vel22(0),
      vel23(0),
      vel31(0),
      vel32(0),
      vel33(0)
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
      } u_pos11;
      u_pos11.real = this->pos11;
      *(outbuffer + offset + 0) = (u_pos11.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos11.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos11.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos11.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos11.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos11.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos11.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos11.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos11);
      union {
        double real;
        uint64_t base;
      } u_pos12;
      u_pos12.real = this->pos12;
      *(outbuffer + offset + 0) = (u_pos12.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos12.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos12.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos12.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos12.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos12.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos12.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos12.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos12);
      union {
        double real;
        uint64_t base;
      } u_pos13;
      u_pos13.real = this->pos13;
      *(outbuffer + offset + 0) = (u_pos13.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos13.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos13.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos13.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos13.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos13.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos13.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos13.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos13);
      union {
        double real;
        uint64_t base;
      } u_pos21;
      u_pos21.real = this->pos21;
      *(outbuffer + offset + 0) = (u_pos21.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos21.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos21.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos21.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos21.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos21.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos21.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos21.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos21);
      union {
        double real;
        uint64_t base;
      } u_pos22;
      u_pos22.real = this->pos22;
      *(outbuffer + offset + 0) = (u_pos22.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos22.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos22.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos22.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos22.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos22.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos22.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos22.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos22);
      union {
        double real;
        uint64_t base;
      } u_pos23;
      u_pos23.real = this->pos23;
      *(outbuffer + offset + 0) = (u_pos23.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos23.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos23.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos23.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos23.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos23.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos23.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos23.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos23);
      union {
        double real;
        uint64_t base;
      } u_pos31;
      u_pos31.real = this->pos31;
      *(outbuffer + offset + 0) = (u_pos31.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos31.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos31.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos31.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos31.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos31.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos31.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos31.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos31);
      union {
        double real;
        uint64_t base;
      } u_pos32;
      u_pos32.real = this->pos32;
      *(outbuffer + offset + 0) = (u_pos32.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos32.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos32.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos32.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos32.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos32.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos32.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos32.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos32);
      union {
        double real;
        uint64_t base;
      } u_pos33;
      u_pos33.real = this->pos33;
      *(outbuffer + offset + 0) = (u_pos33.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos33.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos33.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos33.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos33.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos33.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos33.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos33.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos33);
      union {
        double real;
        uint64_t base;
      } u_att11;
      u_att11.real = this->att11;
      *(outbuffer + offset + 0) = (u_att11.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att11.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att11.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att11.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att11.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att11.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att11.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att11.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att11);
      union {
        double real;
        uint64_t base;
      } u_att12;
      u_att12.real = this->att12;
      *(outbuffer + offset + 0) = (u_att12.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att12.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att12.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att12.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att12.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att12.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att12.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att12.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att12);
      union {
        double real;
        uint64_t base;
      } u_att13;
      u_att13.real = this->att13;
      *(outbuffer + offset + 0) = (u_att13.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att13.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att13.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att13.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att13.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att13.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att13.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att13.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att13);
      union {
        double real;
        uint64_t base;
      } u_att21;
      u_att21.real = this->att21;
      *(outbuffer + offset + 0) = (u_att21.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att21.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att21.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att21.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att21.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att21.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att21.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att21.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att21);
      union {
        double real;
        uint64_t base;
      } u_att22;
      u_att22.real = this->att22;
      *(outbuffer + offset + 0) = (u_att22.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att22.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att22.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att22.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att22.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att22.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att22.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att22.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att22);
      union {
        double real;
        uint64_t base;
      } u_att23;
      u_att23.real = this->att23;
      *(outbuffer + offset + 0) = (u_att23.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att23.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att23.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att23.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att23.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att23.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att23.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att23.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att23);
      union {
        double real;
        uint64_t base;
      } u_att31;
      u_att31.real = this->att31;
      *(outbuffer + offset + 0) = (u_att31.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att31.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att31.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att31.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att31.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att31.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att31.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att31.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att31);
      union {
        double real;
        uint64_t base;
      } u_att32;
      u_att32.real = this->att32;
      *(outbuffer + offset + 0) = (u_att32.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att32.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att32.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att32.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att32.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att32.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att32.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att32.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att32);
      union {
        double real;
        uint64_t base;
      } u_att33;
      u_att33.real = this->att33;
      *(outbuffer + offset + 0) = (u_att33.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_att33.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_att33.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_att33.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_att33.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_att33.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_att33.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_att33.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->att33);
      union {
        double real;
        uint64_t base;
      } u_vel11;
      u_vel11.real = this->vel11;
      *(outbuffer + offset + 0) = (u_vel11.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel11.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel11.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel11.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel11.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel11.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel11.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel11.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel11);
      union {
        double real;
        uint64_t base;
      } u_vel12;
      u_vel12.real = this->vel12;
      *(outbuffer + offset + 0) = (u_vel12.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel12.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel12.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel12.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel12.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel12.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel12.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel12.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel12);
      union {
        double real;
        uint64_t base;
      } u_vel13;
      u_vel13.real = this->vel13;
      *(outbuffer + offset + 0) = (u_vel13.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel13.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel13.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel13.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel13.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel13.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel13.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel13.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel13);
      union {
        double real;
        uint64_t base;
      } u_vel21;
      u_vel21.real = this->vel21;
      *(outbuffer + offset + 0) = (u_vel21.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel21.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel21.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel21.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel21.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel21.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel21.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel21.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel21);
      union {
        double real;
        uint64_t base;
      } u_vel22;
      u_vel22.real = this->vel22;
      *(outbuffer + offset + 0) = (u_vel22.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel22.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel22.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel22.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel22.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel22.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel22.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel22.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel22);
      union {
        double real;
        uint64_t base;
      } u_vel23;
      u_vel23.real = this->vel23;
      *(outbuffer + offset + 0) = (u_vel23.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel23.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel23.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel23.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel23.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel23.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel23.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel23.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel23);
      union {
        double real;
        uint64_t base;
      } u_vel31;
      u_vel31.real = this->vel31;
      *(outbuffer + offset + 0) = (u_vel31.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel31.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel31.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel31.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel31.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel31.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel31.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel31.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel31);
      union {
        double real;
        uint64_t base;
      } u_vel32;
      u_vel32.real = this->vel32;
      *(outbuffer + offset + 0) = (u_vel32.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel32.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel32.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel32.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel32.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel32.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel32.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel32.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel32);
      union {
        double real;
        uint64_t base;
      } u_vel33;
      u_vel33.real = this->vel33;
      *(outbuffer + offset + 0) = (u_vel33.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel33.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel33.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel33.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel33.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel33.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel33.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel33.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel33);
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
      } u_pos11;
      u_pos11.base = 0;
      u_pos11.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos11.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos11.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos11.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos11.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos11.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos11.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos11.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos11 = u_pos11.real;
      offset += sizeof(this->pos11);
      union {
        double real;
        uint64_t base;
      } u_pos12;
      u_pos12.base = 0;
      u_pos12.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos12.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos12.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos12.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos12.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos12.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos12.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos12.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos12 = u_pos12.real;
      offset += sizeof(this->pos12);
      union {
        double real;
        uint64_t base;
      } u_pos13;
      u_pos13.base = 0;
      u_pos13.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos13.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos13.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos13.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos13.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos13.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos13.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos13.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos13 = u_pos13.real;
      offset += sizeof(this->pos13);
      union {
        double real;
        uint64_t base;
      } u_pos21;
      u_pos21.base = 0;
      u_pos21.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos21.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos21.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos21.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos21.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos21.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos21.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos21.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos21 = u_pos21.real;
      offset += sizeof(this->pos21);
      union {
        double real;
        uint64_t base;
      } u_pos22;
      u_pos22.base = 0;
      u_pos22.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos22.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos22.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos22.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos22.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos22.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos22.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos22.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos22 = u_pos22.real;
      offset += sizeof(this->pos22);
      union {
        double real;
        uint64_t base;
      } u_pos23;
      u_pos23.base = 0;
      u_pos23.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos23.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos23.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos23.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos23.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos23.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos23.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos23.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos23 = u_pos23.real;
      offset += sizeof(this->pos23);
      union {
        double real;
        uint64_t base;
      } u_pos31;
      u_pos31.base = 0;
      u_pos31.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos31.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos31.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos31.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos31.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos31.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos31.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos31.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos31 = u_pos31.real;
      offset += sizeof(this->pos31);
      union {
        double real;
        uint64_t base;
      } u_pos32;
      u_pos32.base = 0;
      u_pos32.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos32.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos32.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos32.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos32.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos32.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos32.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos32.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos32 = u_pos32.real;
      offset += sizeof(this->pos32);
      union {
        double real;
        uint64_t base;
      } u_pos33;
      u_pos33.base = 0;
      u_pos33.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos33.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos33.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos33.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos33.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos33.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos33.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos33.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos33 = u_pos33.real;
      offset += sizeof(this->pos33);
      union {
        double real;
        uint64_t base;
      } u_att11;
      u_att11.base = 0;
      u_att11.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att11.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att11.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att11.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att11.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att11.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att11.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att11.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att11 = u_att11.real;
      offset += sizeof(this->att11);
      union {
        double real;
        uint64_t base;
      } u_att12;
      u_att12.base = 0;
      u_att12.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att12.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att12.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att12.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att12.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att12.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att12.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att12.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att12 = u_att12.real;
      offset += sizeof(this->att12);
      union {
        double real;
        uint64_t base;
      } u_att13;
      u_att13.base = 0;
      u_att13.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att13.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att13.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att13.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att13.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att13.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att13.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att13.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att13 = u_att13.real;
      offset += sizeof(this->att13);
      union {
        double real;
        uint64_t base;
      } u_att21;
      u_att21.base = 0;
      u_att21.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att21.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att21.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att21.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att21.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att21.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att21.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att21.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att21 = u_att21.real;
      offset += sizeof(this->att21);
      union {
        double real;
        uint64_t base;
      } u_att22;
      u_att22.base = 0;
      u_att22.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att22.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att22.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att22.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att22.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att22.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att22.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att22.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att22 = u_att22.real;
      offset += sizeof(this->att22);
      union {
        double real;
        uint64_t base;
      } u_att23;
      u_att23.base = 0;
      u_att23.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att23.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att23.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att23.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att23.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att23.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att23.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att23.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att23 = u_att23.real;
      offset += sizeof(this->att23);
      union {
        double real;
        uint64_t base;
      } u_att31;
      u_att31.base = 0;
      u_att31.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att31.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att31.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att31.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att31.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att31.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att31.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att31.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att31 = u_att31.real;
      offset += sizeof(this->att31);
      union {
        double real;
        uint64_t base;
      } u_att32;
      u_att32.base = 0;
      u_att32.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att32.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att32.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att32.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att32.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att32.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att32.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att32.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att32 = u_att32.real;
      offset += sizeof(this->att32);
      union {
        double real;
        uint64_t base;
      } u_att33;
      u_att33.base = 0;
      u_att33.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_att33.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_att33.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_att33.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_att33.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_att33.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_att33.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_att33.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->att33 = u_att33.real;
      offset += sizeof(this->att33);
      union {
        double real;
        uint64_t base;
      } u_vel11;
      u_vel11.base = 0;
      u_vel11.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel11.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel11.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel11.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel11.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel11.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel11.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel11.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel11 = u_vel11.real;
      offset += sizeof(this->vel11);
      union {
        double real;
        uint64_t base;
      } u_vel12;
      u_vel12.base = 0;
      u_vel12.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel12.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel12.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel12.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel12.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel12.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel12.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel12.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel12 = u_vel12.real;
      offset += sizeof(this->vel12);
      union {
        double real;
        uint64_t base;
      } u_vel13;
      u_vel13.base = 0;
      u_vel13.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel13.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel13.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel13.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel13.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel13.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel13.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel13.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel13 = u_vel13.real;
      offset += sizeof(this->vel13);
      union {
        double real;
        uint64_t base;
      } u_vel21;
      u_vel21.base = 0;
      u_vel21.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel21.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel21.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel21.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel21.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel21.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel21.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel21.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel21 = u_vel21.real;
      offset += sizeof(this->vel21);
      union {
        double real;
        uint64_t base;
      } u_vel22;
      u_vel22.base = 0;
      u_vel22.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel22.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel22.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel22.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel22.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel22.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel22.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel22.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel22 = u_vel22.real;
      offset += sizeof(this->vel22);
      union {
        double real;
        uint64_t base;
      } u_vel23;
      u_vel23.base = 0;
      u_vel23.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel23.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel23.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel23.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel23.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel23.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel23.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel23.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel23 = u_vel23.real;
      offset += sizeof(this->vel23);
      union {
        double real;
        uint64_t base;
      } u_vel31;
      u_vel31.base = 0;
      u_vel31.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel31.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel31.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel31.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel31.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel31.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel31.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel31.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel31 = u_vel31.real;
      offset += sizeof(this->vel31);
      union {
        double real;
        uint64_t base;
      } u_vel32;
      u_vel32.base = 0;
      u_vel32.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel32.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel32.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel32.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel32.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel32.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel32.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel32.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel32 = u_vel32.real;
      offset += sizeof(this->vel32);
      union {
        double real;
        uint64_t base;
      } u_vel33;
      u_vel33.base = 0;
      u_vel33.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel33.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel33.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel33.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel33.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel33.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel33.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel33.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel33 = u_vel33.real;
      offset += sizeof(this->vel33);
     return offset;
    }

    const char * getType(){ return "novatel_msgs/INSCOV"; };
    const char * getMD5(){ return "75d77cf9321af3888caeeab3a756d0ac"; };

  };

}
#endif