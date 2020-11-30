/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 19:11:21 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/18 19:37:19 by lhawick          ###   ########.fr       */
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
