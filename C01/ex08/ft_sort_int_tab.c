/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 23:27:13 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/14 23:36:21 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cnt;
	int c;

	cnt = 0;
	while (cnt < size)
	{
		if (tab[cnt] > tab[cnt + 1])
		{
			if (cnt + 1 == size)
			{
				break ;
			}
			c = tab[cnt];
			tab[cnt] = tab[cnt + 1];
			tab[cnt + 1] = c;
		}
	}
}
