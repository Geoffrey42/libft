/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 19:11:38 by ggane             #+#    #+#             */
/*   Updated: 2016/06/23 14:15:05 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (is_empty(*root) == 0)
		*root = btree_create_node(item);
	else
	{
		if (cmpf(item, (*root)->item) < 0)
			btree_insert_data(&(*root)->left, item, cmpf);
		else if (cmpf(item, (*root)->item) >= 0)
			btree_insert_data(&(*root)->right, item, cmpf);
	}
}
