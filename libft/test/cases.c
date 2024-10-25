/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoulati <mmoulati@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:21:21 by mmoulati          #+#    #+#             */
/*   Updated: 2024/10/25 15:38:22 by mmoulati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"

t_str_request		g_str_cases[] = {
	{.s1 = "", .desc = "empty string"},
	{.s1 = "hello world", .desc = "str = 'Hello World'"},
	{.s1 = "h", .desc = "str = 'h'"},
};

t_strstr_request	g_strstr_cases[] = {
	{.s1 = "", .s2 = "", .desc = "s1 == s2 == 0 "},
	{.s1 = "Hello World", .s2 = "", .desc = "s2 == 0 && s1 != 0"},
	{.s1 = "", .s2 = "Hello world", .desc = "s1 == 0 && s2 != 0"},
	{.s1 = "hello", .s2 = "hello world", .desc = "s1 < s2"},
	{.s1 = "hello world", .s2 = "hello", .desc = "s2 < s1 "},
};

const int			strstr_size = sizeof(g_strstr_cases);
const int			strstr_elem = sizeof(g_strstr_cases[0]);

const int			str_size = sizeof(g_str_cases);
const int			str_elem = sizeof(g_str_cases[0]);
