/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 16:02:55 by mmoulati         ###   ########.fr       */
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
	unsigned long	i;

	len = strlen(req->s1);
	if (len < strlen(req->s2))
		len = strlen(req->s2);
	len++;
	init_response(&res, req->desc);
	for (i = 0; i < 2 * len; i++)
	{
		expected = strncmp(req->s1, req->s2, i);
		result = ft_strncmp(req->s1, req->s2, i);
		res.is_pass = result == expected;
		if (!res.is_pass)
		{
			sprintf(res.result, " %d ->  i : %lu", result, i);
			sprintf(res.expected, "%d -> i : %lu", expected, i);
			break ;
		}
	}
	return (res);
}

void	test_strncmp(void)
{
	extern int				strstr_size;
	extern int				strstr_elem;
	extern t_strstr_request	g_strstr_cases[];

	run_test("ft_strncmp", g_strstr_cases, is_test_passed, strstr_size
		/ strstr_elem, strstr_elem);
}
