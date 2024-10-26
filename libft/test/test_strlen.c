/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/26 13:16:29 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"
#include "libft.h"
#include "utils.h"
#include <string.h>

static t_response	is_test_passed(t_str_request *req)
{
	t_response	res;
	int			result;
	int			expected;

	init_response(&res, req->desc);
	expected = strlen(req->s1);
	result = ft_strlen(req->s1);
	res.is_pass = result == expected;
	if (!res.is_pass)
	{
		sprintf(res.result, "length : %d", result);
		sprintf(res.expected, "length : %d", expected);
	}
	return (res);
}

void	test_strlen(void)
{
	extern int				str_size;
	extern int				str_elem;
	extern t_str_request	g_str_cases[];

	run_test("ft_strlen", g_str_cases, is_test_passed, str_size / str_elem,
		str_elem);
}
