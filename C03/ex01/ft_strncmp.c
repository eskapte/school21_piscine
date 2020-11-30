/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:37:30 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/15 14:46:17 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
			continue ;
		}
		else
		{
			if (*s1 > *s2)
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (0);
}
