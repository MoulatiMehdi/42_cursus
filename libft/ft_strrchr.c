/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:15:05 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 15:32:29 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
		while (i >= 0)
		{
			if (str[i] != c)
				return ((char *)str + i);
			i--;
		}
	}
	return (0);
}
