/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:51:22 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 19:02:39 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASES_H
# define CASES_H

typedef struct s_array
{
	char			*str;
	unsigned long	len;
}					t_array;

typedef struct s_str_request
{
	char			*s1;
	int				c;
	char			*desc;
}					t_str_request;

typedef struct s_strstr_request
{
	char			*s1;
	char			*s2;
	char			*desc;
}					t_strstr_request;

#endif
