/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:07:24 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 16:48:26 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	dstsize--;
	i = 0;
	while (i < dstsize && i < src_size)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < dstsize)
	{
		dst[i] = '\0';
		i++;
	}
	dst[i] = '\0';
	return (i);
}
