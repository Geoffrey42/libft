/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 08:58:38 by ggane             #+#    #+#             */
/*   Updated: 2016/06/04 14:11:36 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (is_empty(root))
	{
		if (cmpf(data_ref, root->item) < 0)
			return (btree_search_item(root->left, data_ref, cmpf));
		else if (cmpf(data_ref, root->item) == 0)
			return (root->item);
		else if (cmpf(data_ref, root->item) > 0)
			return (btree_search_item(root->right, data_ref, cmpf));
	}
	return (NULL);
}
