/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 11:25:51 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "utils.h"
#include <string.h>

typedef struct s_request
{
	char			*s1;
	char			*s2;
	unsigned long	n;
	char			*desc;
}					t_request;

static t_response	is_test_passed(t_request *req)
{
	t_response	res;
	char		*result;
	char		*expected;

	init_response(&res, req->desc);
	expected = strnstr(req->s1, req->s2, req->n);
	result = ft_strnstr(req->s1, req->s2, req->n);
	strcpy(res.result, result ? result : "(null)");
	strcpy(res.expected, expected ? expected : "(null)");
	res.is_pass = result == expected;
	return (res);
}

void	test_strnstr(void)
{
	int	cases_size;
	int	elem_size;

	t_request cases[] = {
		{.s1 = 0, .s2 = "hello", .n = 5, .desc = "s1 = null and s2 = full"},
		{.s1 = "hello", .s2 = 0, .n = 5, "s1 = full and s2 = Null"},
		{.s1 = 0, .s2 = 0, .n = 5, "both null"},
		{.s1 = 0, .s2 = 0, .n = 0, "searched length equal 0"},
		{.s1 = "hello", .s2 = "hello world", .n = 5,
			.desc = "s2 is long string"},
		{.s1 = "hello world", .s2 = "hello", .n = 3,
			.desc = "searched length less that the length of s1"},
		{.s1 = "hello world", .s2 = "hello", .n = 5,
			.desc = "searched length is exact the length of the s2"},
		{.s1 = "hello world", .s2 = "hello", .n = 0,
			.desc = "searched length is 0"},
	};
	cases_size = sizeof(cases);
	elem_size = sizeof(cases[0]);
	run_test("ft_strnstr", cases, is_test_passed, cases_size / elem_size,
		elem_size);
}
