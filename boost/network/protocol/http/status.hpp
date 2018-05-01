#ifndef BOOST_NETWORK_PROTOCOL_HTTP_STATUS_HPP_20180501
#define BOOST_NETWORK_PROTOCOL_HTTP_STATUS_HPP_20180501

namespace boost {
namespace network {
namespace http {

/// The set of known status codes for HTTP server responses.
enum status_t {
  ok = 200,
  created = 201,
  accepted = 202,
  no_content = 204,
  partial_content = 206,
  multiple_choices = 300,
  moved_permanently = 301,
  moved_temporarily = 302,
  not_modified = 304,
  bad_request = 400,
  unauthorized = 401,
  forbidden = 403,
  not_found = 404,
  not_supported = 405,
  not_acceptable = 406,
  request_timeout = 408,
  precondition_failed = 412,
  unsatisfiable_range = 416,
  internal_server_error = 500,
  not_implemented = 501,
  bad_gateway = 502,
  service_unavailable = 503,
  space_unavailable = 507,
};

}  // namespace http
}  // namespace network
}  // namespace boost

#endif  // BOOST_NETWORK_PROTOCOL_HTTP_STATUS_HPP_20180501
