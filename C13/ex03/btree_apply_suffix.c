/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 19:45:56 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/28 20:15:56 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left != 0)
		btree_apply_suffix(root->left, applyf);
	if (root->right != 0)
		btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}
