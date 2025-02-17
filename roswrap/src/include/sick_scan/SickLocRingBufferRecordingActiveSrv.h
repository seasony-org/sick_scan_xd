#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocRingBufferRecordingActiveSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCRINGBUFFERRECORDINGACTIVESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCRINGBUFFERRECORDINGACTIVESRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocRingBufferRecordingActiveSrvRequest.h>
#include <sick_scan/SickLocRingBufferRecordingActiveSrvResponse.h>


namespace sick_scan
{

struct SickLocRingBufferRecordingActiveSrv
{

typedef SickLocRingBufferRecordingActiveSrvRequest Request;
typedef SickLocRingBufferRecordingActiveSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocRingBufferRecordingActiveSrv
} // namespace sick_scan


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrv > {
  static const char* value()
  {
    return "9bb3f90ef7a4dde50a9193067d4298d5";
  }

  static const char* value(const ::sick_scan::SickLocRingBufferRecordingActiveSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocRingBufferRecordingActiveSrv";
  }

  static const char* value(const ::sick_scan::SickLocRingBufferRecordingActiveSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocRingBufferRecordingActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrv >
template<>
struct DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocRingBufferRecordingActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocRingBufferRecordingActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocRingBufferRecordingActiveSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrv >
template<>
struct DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocRingBufferRecordingActiveSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocRingBufferRecordingActiveSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCRINGBUFFERRECORDINGACTIVESRV_H
