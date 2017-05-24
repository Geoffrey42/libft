/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_rev_infix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/04 14:12:44 by ggane             #+#    #+#             */
/*   Updated: 2016/06/21 20:21:28 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_rev_infix(t_btree *root, void (*applyf)(void *))
{
	if (is_empty(root))
	{
		btree_apply_rev_infix(root->right, applyf);
		applyf(root->item);
		btree_apply_rev_infix(root->left, applyf);
	}
}
