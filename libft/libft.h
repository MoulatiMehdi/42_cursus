/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:27:34 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 17:33:42 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				toupper(int c);
int				tolower(int c);
int				isalpha(int c);
int				isdigit(int c);
int				isalnum(int c);
int				isascii(int c);
int				isprint(int c);
int				strcmp(const char *s1, const char *s2);
int				memcmp(const void *s1, const void *s2, unsigned long n);
int				atoi(const char *str);

unsigned long	strlen(const char *s);
unsigned long	strlcpy(char *dst, const char *src, unsigned long dstsize);
unsigned long	strlcpy(char *dst, const char *src, unsigned long dstsize);

char			*strstr(const char *haystack, const char *needle);
char			*strchr(const char *s, int c);
char			*strchr(const char *s, int c);

void			*memset(void *b, int c, unsigned long len);
void			*memcpy(void *dst, const void *src, unsigned long n);
void			*memmove(void *dst, const void *src, unsigned long len);
void			*memchr(const void *s, int c, unsigned long n);
void			bzero(void *s, unsigned long n);
