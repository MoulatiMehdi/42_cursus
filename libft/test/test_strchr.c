/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 21:24:33 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "utils.h"
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

	init_response(&res, req->desc);
	expected = strchr(req->str, req->c);
	result = ft_strchr(req->str, req->c);
	strcpy(res.result, result ? result : "(null)");
	strcpy(res.expected, expected ? expected : "(null)");
	res.is_pass = result == expected;
	return (res);
}

void	test_strchr(void)
{
	int	cases_size;
	int	elem_size;

	t_request cases[] = {
		{.str = "", .c = 0, .desc = "Null bytes in the empty string"},
		{.str = "hello world", .c = 32, .desc = "Char at the middle"},
		{.str = "hello world", .c = 'd', .desc = "Char at the end"},
		{.str = "hello world", .c = 'h', .desc = "Char at the start"},
		{.str = "hello world", .c = 0, .desc = "null byte in the string"},
	};
	cases_size = sizeof(cases);
	elem_size = sizeof(cases[0]);
	run_test("ft_strchr", cases, is_test_passed, cases_size / elem_size,
		elem_size);
}
