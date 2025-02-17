#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocSetOdometryActiveSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETODOMETRYACTIVESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCSETODOMETRYACTIVESRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocSetOdometryActiveSrvRequest.h>
#include <sick_scan/SickLocSetOdometryActiveSrvResponse.h>


namespace sick_scan
{

struct SickLocSetOdometryActiveSrv
{

typedef SickLocSetOdometryActiveSrvRequest Request;
typedef SickLocSetOdometryActiveSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocSetOdometryActiveSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrv > {
  static const char* value()
  {
    return "2341f625ca657b2df0c5a1d9ca8e96b1";
  }

  static const char* value(const ::sick_scan::SickLocSetOdometryActiveSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocSetOdometryActiveSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocSetOdometryActiveSrv";
  }

  static const char* value(const ::sick_scan::SickLocSetOdometryActiveSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetOdometryActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSetOdometryActiveSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocSetOdometryActiveSrv >
template<>
struct DataType< ::sick_scan::SickLocSetOdometryActiveSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSetOdometryActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetOdometryActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSetOdometryActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetOdometryActiveSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSetOdometryActiveSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocSetOdometryActiveSrv >
template<>
struct DataType< ::sick_scan::SickLocSetOdometryActiveSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSetOdometryActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetOdometryActiveSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCSETODOMETRYACTIVESRV_H
