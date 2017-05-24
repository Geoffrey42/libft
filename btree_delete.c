/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 10:48:27 by ggane             #+#    #+#             */
/*   Updated: 2016/06/28 11:25:56 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_delete(t_btree *tree)
{
	t_btree	del_left;
	t_btree	del_right;

	del_left = *tree->left;
	del_right = *tree->right;
	if (!is_empty(tree))
	{
		btree_delete(&del_left);
		btree_delete(&del_right);
		free((void *)tree);
		tree = NULL;
	}
}
