/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:34:56 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/24 20:38:41 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (i >= n - 1 || s1[i] != s2[i])
			break ;
		i++;
	}
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}