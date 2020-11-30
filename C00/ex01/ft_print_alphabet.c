/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:26:10 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/12 19:33:08 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char first_char;
	char last_char;

	first_char = 'a';
	last_char = 'z';
	while (first_char <= last_char)
	{
		write(1, &first_char, 1);
		first_char++;
	}
}
