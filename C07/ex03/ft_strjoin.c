/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 21:03:44 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/21 21:40:51 by lhawick          ###   ########.fr       */
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

int		get_size(int size, char **strs, char *sep)
{
	int nsize;
	int i;

	i = 0;
	nsize = 0;
	while (i < size)
		nsize += ft_strlen(strs[i++]);
	nsize += ft_strlen(sep) * (i - 1) + 1;
	return (nsize);
}

void	fill_res(int size, char **strs, char *sep, char *res)
{
	int i;
	int j;
	int sepi;

	i = 0;
	j = 0;
	sepi = 0;
	while (i < size)
	{
		while (*strs[i] != '\0')
		{
			res[j++] = *strs[i];
			strs[i]++;
		}
		i++;
		if (i == size)
			break ;
		while (sep[sepi] != '\0')
			res[j++] = sep[sepi++];
		sepi = 0;
	}
	res[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		nsize;
	char	*res;

	nsize = get_size(size, strs, sep);
	res = malloc(nsize);
	fill_res(size, strs, sep, res);
	return (res);
}
