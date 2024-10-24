/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:09:04 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 12:23:07 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *s);
int		ft_memset(void *ptr);
int		ft_bzero(char *b);
int		ft_memcpy(void *ptr);
int		ft_memmove(void *ptr);
int		ft_strlcpy(char *s);
int		ft_strlcat(char *s);
char	ft_toupper(int c);
char	ft_tolower(int c);
int		ft_strchr(char *s);
int		ft_strrchr(char *s);
int		ft_strncmp(char *s);
int		ft_memchr(void *ptr);
int		ft_memcmp(void *ptr);
int		ft_strnstr(char *s);
int		ft_atoi(char *str);
