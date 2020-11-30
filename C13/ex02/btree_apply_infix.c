/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 19:32:14 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/28 20:16:27 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left != 0)
		btree_apply_infix(root->left, applyf);
	applyf(root->item);
	if (root->right != 0)
		btree_apply_infix(root->right, applyf);
}
