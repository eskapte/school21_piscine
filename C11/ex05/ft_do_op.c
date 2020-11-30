/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 22:28:43 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/26 22:35:01 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char		res[11];
	int			i;

	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	i = 0;
	while (nb != 0)
	{
		res[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	i--;
	while (i >= 0)
	{
		write(1, &res[i], 1);
		i--;
	}
}

int		operator(int p1, char *op, int p2)
{
	if (*op == '+')
		return (p1 + p2);
	else if (*op == '-')
		return (p1 - p2);
	else if (*op == '*')
		return (p1 * p2);
	else if (*op == '/')
		return (p1 / p2);
	else if (*op == '%')
		return (p1 % p2);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int res;
	int s;
	int i;

	res = 0;
	s = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10;
		res += (int)str[i] - '0';
		i++;
	}
	if (s % 2 != 0)
		return (-res);
	else
		return (res);
}

int		main(int argc, char *argv[])
{
	int res;
	int p1;
	int p2;

	if (argc != 4)
		return (0);
	else
	{
		p1 = ft_atoi(argv[1]);
		p2 = ft_atoi(argv[3]);
		if (*argv[2] == '/' && p2 == 0)
		{
			write(1, "Stop : division by zero\n", 25);
			return (0);
		}
		if (*argv[2] == '%' && p2 == 0)
		{
			write(1, "Stop : modulo by zero\n", 23);
			return (0);
		}
		res = operator(p1, argv[2], p2);
		ft_putnbr(res);
		write(1, "\n", 1);
	}
}
