/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 17:14:49 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

typedef struct s_request
{
	char	*str;
	int		c;
	char	*desc;
}			t_request;

t_response	is_test_passed(t_request *req)
{
	t_response	res;
	char		*result;
	char		*expected;

	init_response(res);
	strcpy(req->desc, res.desc);
	expected = strchr(req->str, req->c);
	result = ft_strchr(req->str, req->c);
	strcpy(res.result, result);
	strcpy(res.expected, expected);
	res.is_pass = result == expected;
}

void	test_strchr(void)
{
	t_request cases[100] = {
		{.str = 0, .c = 0, .desc = "Null string"},
	};
	run_test("ft_strchr", cases, is_test_passed, sizeof(cases),
		sizeof(t_request));
}
