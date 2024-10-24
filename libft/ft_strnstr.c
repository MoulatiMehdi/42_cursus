/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:06:47 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 20:36:53 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned long len)
{
	int	i;
	int	j;

	if (!haystack || !needle)
		return (0);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (i + j < len || needle[j] != haystack[i + j])
				break ;
			j++;
		}
		if (needle[j] == haystack[i + j])
			return ((char *)haystack);
		i++;
	}
	return (0);
}
