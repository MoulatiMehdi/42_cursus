/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:07:24 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 21:21:25 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned long	ft_strlen(const char *str);

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	i;
	unsigned long	dst_size;
	unsigned long	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dstsize > dst_size)
		dstsize = dst_size;
	if (dst_size == 0 || src_size == 0 || dstsize == 0)
		return (src_size + dstsize);
	dstsize--;
	i = 0;
	while (i < dst_size)
		i++;
	while (i < dstsize && i < src_size)
	{
		dst[i] = src[i - dst_size];
		i++;
	}
	while (i < dst_size)
		dst[i++] = '\0';
	dst[i] = '\0';
	return (src_size + dstsize + 1);
}
