/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 20:45:57 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"
#include "libft.h"
#include "utils.h"
#include <string.h>

static t_response	is_test_passed(t_strstr_request *req)
{
	t_response		res;
	int				result;
	int				expected;
	unsigned long	len;
	unsigned long	len_dst;
	unsigned long	i;
	char			res_dst[strlen(req->s2) + 1];
	char			exp_dst[strlen(req->s2) + 1];

	init_response(&res, req->desc);
	len = strlen(req->s1);
	len_dst = strlen(req->s2);
	if (len < len_dst)
		len = len_dst;
	len++;
	for (i = 0; i < 5 * len; i++)
	{
		strcpy(res_dst, req->s2);
		strcpy(exp_dst, req->s2);
		expected = strlcpy(res_dst, req->s1, i);
		result = ft_strlcpy(exp_dst, req->s1, i);
		res.is_pass = result == expected;
		if (!res.is_pass)
		{
			sprintf(res.result, "int : \x1b[31m%3d\x1b[0m when i = %3lu",
				result, i);
			sprintf(res.expected, "int : \x1b[32m%3d\x1b[0m when i = %3lu",
				expected, i);
			break ;
		}
		res.is_pass = (!res_dst[0] && !exp_dst[0]) || strncmp(res_dst, exp_dst,
				len_dst);
		if (res.is_pass)
		{
			sprintf(res.result, "str : \x1b[31m'%s'\x1b[0m when i = %3lu",
				res_dst, i);
			sprintf(res.expected, "str : \x1b[32m'%s'\x1b[0m when i = %3lu",
				exp_dst, i);
			break ;
		}
	}
	return (res);
}

void	test_strlcpy(void)
{
	extern int				strl_size;
	extern int				strl_elem;
	extern t_strstr_request	g_strl_cases[];

	run_test("ft_strlcpy", g_strl_cases, is_test_passed, strl_size / strl_elem,
		strl_elem);
}
