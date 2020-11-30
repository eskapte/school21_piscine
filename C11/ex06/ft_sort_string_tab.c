/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 23:04:10 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/26 23:35:44 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			continue ;
		}
		else
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		k;
	char	*c;

	i = 0;
	while (tab[i] != '\0')
	{
		k = i + 1;
		while (tab[k] != '\0')
		{
			if (ft_strcmp(tab[i], tab[k]) > 0)
			{
				c = tab[i];
				tab[i] = tab[k];
				tab[k] = c;
			}
			k++;
		}
		i++;
	}
}
