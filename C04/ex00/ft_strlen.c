/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:18:36 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/17 16:23:07 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		cnt++;
		str++;
	}
	return (cnt);
}
