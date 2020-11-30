/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 21:24:24 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/27 22:53:35 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	int		i;
	t_list	*new_el;

	i = 0;
	new_el = ft_create_elem(data);
	if (!(*begin_list))
	{
		*begin_list = new_el;
		return ;
	}
	while ((*begin_list))
	{
		if ((*begin_list)->next == NULL)
		{
			(*begin_list)->next = new_el;
			begin_list[++i] = new_el;
			break ;
		}
		i++;
		(*begin_list) = (*begin_list)->next;
	}
}
