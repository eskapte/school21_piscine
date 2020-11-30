/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 17:20:21 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/27 19:26:14 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *p_res;

	p_res = malloc(sizeof(t_list));
	if (p_res)
	{
		p_res->data = data;
		p_res->next = NULL;
	}
	return (p_res);
}
