/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:26:51 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 14:13:41 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	test_func(char *name, int (*func_origin)(int), int (*func_made)(int));

int	main(void)
{
	test_func("tolower", tolower, ft_tolower);
	test_func("toupper", toupper, ft_toupper);
	test_func("isalpha", isalpha, ft_isalpha);
	test_func("isascii", isascii, ft_isascii);
	test_func("isprint", isprint, ft_isprint);
	test_func("isdigit", isdigit, ft_isdigit);
	test_func("isalnum", isalnum, ft_isalnum);
	return (0);
}
