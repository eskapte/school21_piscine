/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 21:31:57 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/13 19:12:13 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	int_to_char(int num)
{
	return (num + '0');
}

void	show(int int_a, int int_b, int int_c)
{
	char a;
	char b;
	char c;

	a = int_to_char(int_a);
	b = int_to_char(int_b);
	c = int_to_char(int_c);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int fi;
	int si;
	int li;

	fi = 0;
	si = 1;
	li = 2;
	while (fi <= 7)
	{
		show(fi, si, li);
		if (li != 9)
		{
			li++;
		}
		else if (si != 8)
		{
			li = ++si;
			li++;
		}
		else
		{
			si = ++fi;
			li = ++si;
			li++;
		}
		if (fi > 7)
		{
			break ;
		}
		else
		{
			write(1, ", ", 2);
		}
	}
}
