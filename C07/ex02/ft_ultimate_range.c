/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 19:00:08 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/20 19:59:06 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int cnt;
	int i;

	res = NULL;
	cnt = 0;
	if (min >= max)
		return (res);
	i = min;
	while (i < max)
	{
		cnt++;
		i++;
	}
	res = malloc(cnt * 4);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int cnt;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = ft_range(min, max);
	cnt = max - min;
	return (cnt);
}
