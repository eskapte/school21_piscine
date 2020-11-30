/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:43:16 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/20 17:56:39 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		size;
	char	*res;
	int		i;

	i = 0;
	size = ft_strlen(src);
	res = malloc(size);
	while (i < size)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
