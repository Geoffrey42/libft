/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 18:16:00 by ggane             #+#    #+#             */
/*   Updated: 2016/06/04 14:09:45 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*new;

	new = NULL;
	new = malloc(sizeof(t_btree));
	if (new)
	{
		new->left = NULL;
		new->right = NULL;
		new->item = item;
	}
	return (new);
}
