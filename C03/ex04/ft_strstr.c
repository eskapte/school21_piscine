/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:10:16 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/16 20:59:54 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		cnt++;
		str++;
	}
	return (cnt);
}

char	*ft_strstr(char *str, char *to_find)
{
	int find_len;
	char *first_enter;
	int if_find;

	if_find = 0;
	find_len = ft_strlen(to_find);
	while (*str != '\0' || *to_find != '\0')
	{
		if (*str == *to_find)
		{
			if (if_find == 0)
			{
				if_find = 1;
				first_enter = str;
			}
			if (*str == to_find[find_len - 1])
			{
				return (first_enter);
			}
			str++;
			to_find++;
		}
		else if (if_find == 0)
		{
			str++;
		}
		else if (*str != *to_find && if_find == 1)
		{
			return NULL;
		}
	}
	return NULL;
}

int main()
{
	char str1[] = "hello world!";
	char str2[] = "wo";
	char *result = ft_strstr(str1, str2);
	printf("%s", result);

	return 0;
}
