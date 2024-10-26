/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:26:51 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/26 13:17:09 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_strchr(void);
void	test_strrchr(void);
void	test_strncmp(void);
void	test_strnstr(void);
void	test_strlcpy(void);
void	test_strlcat(void);
void	test_strlen(void);

int	main(void)
{
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_strnstr();
	test_strlcpy();
	test_strlcat();
	test_strlen();
	return (0);
}
