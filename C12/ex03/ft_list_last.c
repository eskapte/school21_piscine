/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 21:13:23 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/27 21:42:33 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = NULL;
	while (begin_list)
	{
		if (begin_list->next == NULL)
		{
			list = begin_list;
			break ;
		}
		begin_list = begin_list->next;
	}
	return (list);
}
