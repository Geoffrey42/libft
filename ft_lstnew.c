/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 08:46:30 by ggane             #+#    #+#             */
/*   Updated: 2016/11/06 21:25:58 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	else
	{
		if (content != NULL)
		{
			new->content = (void *)ft_memalloc(sizeof(void) * content_size + 1);
			if (new->content == NULL)
				return (NULL);
			ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		new->next = NULL;
	}
	return (new);
}
