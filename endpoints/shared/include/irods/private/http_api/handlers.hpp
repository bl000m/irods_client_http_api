#ifndef IRODS_HTTP_API_HANDLERS_HPP
#define IRODS_HTTP_API_HANDLERS_HPP

#include "irods/private/http_api/common.hpp"

#ifndef IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE
// Enables all endpoint function signatures for declarations and definitions to be
// updated from one location.
#  define IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(name) \
	auto name(session_pointer_type _sess_ptr, request_type& _req)->void
#endif // IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE

namespace irods::http::handler
{
	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(authentication);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(access_token_handler);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(collections);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(config);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(data_objects);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(information);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(query);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(resources);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(rules);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(tickets);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(users_groups);

	IRODS_HTTP_API_ENDPOINT_ENTRY_FUNCTION_SIGNATURE(zones);
} // namespace irods::http::handler

#endif // IRODS_HTTP_API_HANDLERS_HPP
