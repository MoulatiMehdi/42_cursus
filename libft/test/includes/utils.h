/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@1337.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:38:45 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/23 23:23:20 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

# include <stdio.h>
# include <string.h>

# define RED "\x1b[1;91m"
# define BLUE "\x1b[1;96m"
# define GREEN "\x1b[1;92m"
# define YELLOW "\x1b[1;93m"
# define DEFAULT "\x1b[0m"
# define GRAY "\x1b[1;90m"

# define CROSS "\u274c"
# define CHECK "\u2714"
# define PASS "\x1b[1;37;102m PASS \x1b[0m"
# define FAIL "\x1b[1;37;101m FAIL \x1b[0m"
# define TAB "\t"

typedef struct s_response
{
	char	result[1024];
	char	expected[1024];
	char	*desc;
	int		is_pass;
}			t_response;

void		msg_pass(char *str);
void		msg_fail(char *desc, char *expected, char *result);
void		msg_status(char *func_name, int state);

void		run_test(char *func_name, void *tests, t_response (*f)(), int size,
				unsigned long elem_size);

void		init_response(t_response *res, char *desc);

#endif
