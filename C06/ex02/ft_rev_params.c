/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 17:50:01 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/20 17:40:56 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int args, char *argv[])
{
	int i;
	int cnt_p;

	cnt_p = args - 1;
	i = 1;
	while (cnt_p >= i)
	{
		while (*argv[cnt_p] != '\0')
		{
			write(1, argv[cnt_p], 1);
			argv[cnt_p]++;
		}
		write(1, "\n", 1);
		cnt_p--;
	}
	return (0);
}
