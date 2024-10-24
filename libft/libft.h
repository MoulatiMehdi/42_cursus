/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:27:34 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 20:40:12 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
int				ft_atoi(const char *str);

unsigned long	ft_strlen(const char *s);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize);

char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned long len);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);

void			*ft_memset(void *b, int c, unsigned long len);
void			*ft_memcpy(void *dst, const void *src, unsigned long n);
void			*ft_memmove(void *dst, const void *src, unsigned long len);
void			*ft_memchr(const void *s, int c, unsigned long n);
void			ft_bzero(void *s, unsigned long n);
