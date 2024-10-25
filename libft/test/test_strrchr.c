/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 15:51:01 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"
#include "libft.h"
#include "utils.h"
#include <string.h>

static t_response	is_test_passed(t_str_request *req)
{
	t_response	res;
	char		*result;
	char		*expected;

	init_response(&res, req->desc);
	for (int i = -255 * 5; i < 255 * 5; i++)
	{
		expected = strrchr(req->s1, i);
		result = ft_strrchr(req->s1, i);
		res.is_pass = result == expected;
		if (!res.is_pass)
		{
			sprintf(res.result, "str : '%s' , i : %d",
				result ? result : "(null)", i);
			sprintf(res.expected, "str : '%s' , i : %d",
				expected ? expected : "(null)", i);
			break ;
		}
	}
	return (res);
}

void	test_strrchr(void)
{
	extern int				str_size;
	extern int				str_elem;
	extern t_str_request	g_str_cases[];

	run_test("ft_strrchr", g_str_cases, is_test_passed, str_size / str_elem,
		str_elem);
}
