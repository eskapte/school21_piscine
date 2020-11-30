/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 20:55:52 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/27 21:11:29 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int cnt;

	cnt = 0;
	while (begin_list)
	{
		cnt++;
		begin_list = begin_list->next;
	}
	return (cnt);
}
