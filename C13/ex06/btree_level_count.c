/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 21:39:15 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/28 23:22:26 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	return (a);
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (1);
	return (max(btree_level_count(root->left) + 1,
	btree_level_count(root->right) + 1));
}
