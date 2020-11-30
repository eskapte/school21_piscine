/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:57:41 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/20 18:53:50 by lhawick          ###   ########.fr       */
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
