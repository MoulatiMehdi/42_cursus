/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 14:47:41 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "utils.h"
#include <string.h>

typedef struct s_request
{
	char			*s1;
	int				c;
	char			*desc;
}					t_request;

static t_response	is_test_passed(t_request *req)
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
	int	cases_size;
	int	elem_size;

	t_request cases[] = {
		{.s1 = "", .desc = "empty string"},
		{.s1 = "hello world", .desc = "str = 'Hello World'"},
		{.s1 = "h", .desc = "str = 'h'"},
	};
	cases_size = sizeof(cases);
	elem_size = sizeof(cases[0]);
	run_test("ft_strrchr", cases, is_test_passed, cases_size / elem_size,
		elem_size);
}
