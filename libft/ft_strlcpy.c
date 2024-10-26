/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:07:24 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 22:38:54 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlen(const char *str);

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	i;
	unsigned long	dst_size;
	unsigned long	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dst_size == 0 || dstsize == 0)
		return (src_size);
	dstsize--;
	if (dstsize > dst_size)
		dstsize = dst_size;
	i = 0;
	while (i < dstsize && i < src_size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
