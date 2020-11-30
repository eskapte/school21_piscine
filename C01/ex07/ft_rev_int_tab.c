/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 22:58:01 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/14 23:23:03 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int cnt;
	int newarr[size];
	int end;

	cnt = 0;
	end = size - 1;
	while (cnt < size)
	{
		newarr[cnt] = tab[end];
		cnt++;
		end--;
	}
}
