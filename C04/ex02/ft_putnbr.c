/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:29:47 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/18 15:39:52 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	if_is_null(int *nb)
{
	if (*nb == 0)
	{
		ft_putchar('0' + 0);
	}
}

int		if_min(int *nb)
{
	if (*nb == -2147483648)
	{
		*nb += 1;
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putnbr(int nb)
{
	char	res[12];
	int		i;
	int		is_min;

	is_min = if_min(&nb);
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if_is_null(&nb);
	i = 0;
	while (nb != 0)
	{
		res[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i >= 0)
	{
		if (is_min-- == 1)
		{
			res[0]++;
		}
		write(1, &res[i--], 1);
	}
}
