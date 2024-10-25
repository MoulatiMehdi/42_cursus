/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 14:21:04 by mmoulati         ###   ########.fr       */
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
	int			result;
	int			expected;

	init_response(&res, req->desc);
	expected = strncmp(req->s1, req->s2, req->n);
	result = ft_strncmp(req->s1, req->s2, req->n);
	sprintf(res.result, "%d", result);
	sprintf(res.expected, "%d", expected);
	res.is_pass = result == expected;
	return (res);
}

void	test_strncmp(void)
{
	int	cases_size;
	int	elem_size;

	t_request cases[] = {
		{.s1 = "", .s2 = "", .n = 1, "s1 == s2 == 0 < len"},
		{.s1 = "Hello World", .s2 = "", .n = 5, "s2 == 0 < len < s1"},
		{.s1 = "", .s2 = "Hello world", .n = 1, "s1 == 0 < len <s2 "},
		{.s1 = "", .s2 = "Hello world", .n = 5, "s1 == 0 <len < s2"},
		{.s1 = "Hello World", .s2 = "", .n = 100, "s2 == 0 < s1 < len"},
		{.s1 = "hello", .s2 = "hello world", .n = 0,
			.desc = "len = 0 < s1 < s2"},
		{.s1 = "hello", .s2 = "hello world", .n = 3, .desc = "len < s1 < s2"},
		{.s1 = "hello world", .s2 = "hello", .n = 3, .desc = "len < s2 < s1"},
		{.s1 = "hello", .s2 = "hello world", .n = 7, .desc = "s1 < len < s2 "},
		{.s1 = "hello world", .s2 = "hello", .n = 0,
			.desc = "len = 0 < s2 < s1"},
		{.s1 = "hello", .s2 = "hello world", .n = 5, .desc = "s1 == len < s2"},
		{.s1 = "hello world", .s2 = "hello", .n = 5, .desc = "s2 == len < s1"},
		{.s1 = "hello", .s2 = "hello world", .n = 11, .desc = "s1 < s2 == len"},
		{.s1 = "hello world", .s2 = "hello", .n = 11, .desc = "s2 < s1 == len"},
		{.s1 = "hello", .s2 = "hello world", .n = 100, .desc = "s1 < s2 < len"},
		{.s1 = "hello world", .s2 = "hello", .n = 100, .desc = "s2 < s1 < len"},
		{.s1 = "hello world", .s2 = "hello", .n = 7, .desc = "s2 < len < s1 "},
	};
	cases_size = sizeof(cases);
	elem_size = sizeof(cases[0]);
	run_test("ft_strncmp", cases, is_test_passed, cases_size / elem_size,
		elem_size);
}
