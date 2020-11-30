/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 20:58:10 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/28 23:19:26 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	if (cmpf(data_ref, root->item) > 0)
		btree_search_item(root->right, data_ref, cmpf);
	if (cmpf(data_ref, root->item) == 0)
		return (root);
	if (cmpf(data_ref, root->item) < 0)
		btree_search_item(root->left, data_ref, cmpf);
	return (0);
}
