/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 18:02:11 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/18 19:09:19 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int res;
	int div;

	if (nb <= 0)
		return (0);
	res = nb;
	div = nb;
	while (1)
	{
		div = (nb / div + div) / 2;
		if (res > div)
			res = div;
		else
		{
			if ((res * res) < nb)
				return (0);
			else
				return (res);
		}
	}
}
