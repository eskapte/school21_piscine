/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 20:42:01 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/12 20:43:59 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char first_num;
	char last_num;

	first_num = '0';
	last_num = '9';
	while (first_num <= last_num)
	{
		write(1, &first_num, 1);
		first_num++;
	}
}
