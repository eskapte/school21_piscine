/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 21:50:17 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/25 22:00:39 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *new_tab;
	int i;

	i = 0;
	new_tab = malloc(sizeof(int) * lenght);
	while (i < lenght)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}
