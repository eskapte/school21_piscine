/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 20:13:25 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/18 20:41:16 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int delcnt;
	int i;
	int plus;

	if (nb == 0)
		return (0);
	delcnt = 0;
	i = 1;
	while (i <= nb)
	{
		plus = ((nb % i) == 0) ? 1 : 0;
		delcnt += plus;
		i++;
	}
	if (delcnt == 2)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int delcnt;
	int j;
	int plus;

	delcnt = 0;
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (delcnt != 2)
	{
		j = 1;
		delcnt = 0;
		while (j <= nb)
		{
			plus = ((nb % j) == 0) ? 1 : 0;
			delcnt += plus;
			j++;
		}
		if (delcnt == 2)
			return (nb);
		else
			nb++;
	}
	return (nb);
}
