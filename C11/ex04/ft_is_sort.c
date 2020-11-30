/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 22:17:34 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/26 19:03:52 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int k;
	int j;

	k = 0;
	j = 0;
	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			k++;
			i++;
		}
		else if (f(tab[i], tab[i + 1]) < 0)
		{
			j++;
			i++;
		}
		else
			i++;
	}
	if (k != 0 && j != 0)
		return (0);
	return (1);
}
