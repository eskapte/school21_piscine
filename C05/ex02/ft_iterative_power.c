/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:24:12 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/18 16:44:53 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	i = 1;
	res = 1;
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
