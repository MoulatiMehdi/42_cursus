/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 14:29:58 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

void	test_func(char *name, int (*func_origin)(), int (*func_made)())
{
	int		error;
	int		res;
	int		exp;
	char	expected[1024];
	char	result[1024];
	char	desc[1024];

	error = 0;
	for (int i = INT_MIN; i <= INT_MAX; i++)
	{
		res = func_origin(i);
		exp = func_made(i);
		//	printf("%d %d\n", res, exp);
		if (res != exp)
		{
			sprintf(result, "ft_%s(%d) : %d", name, i, res);
			sprintf(expected, "%s(%d)    : %d", name, i, exp);
			sprintf(desc, "input %d", i);
			if (error == 0)
				msg_fail(desc, expected, result);
			error++;
			break ;
		}
	}
	msg_status(name, error);
}
