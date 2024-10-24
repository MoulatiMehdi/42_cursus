#include "utils.h"

void	init_response(t_response *res, char *desc)
{
	memset(res->result, 0, sizeof(res->result));
	memset(res->expected, 0, sizeof(res->expected));
	res->desc = desc;
	res->is_pass = 0;
}
