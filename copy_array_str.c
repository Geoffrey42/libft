/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_array_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 18:50:01 by ggane             #+#    #+#             */
/*   Updated: 2016/12/18 00:01:34 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		copy_each_str(char **origin, char **copy)
{
	int		i;

	i = 0;
	while (origin[i])
	{
		copy[i] = ft_strdup(origin[i]);
		i++;
	}
	copy[i] = NULL;
}

static char		**allocate_memory(size_t size)
{
	char	**copy;

	if (!(copy = (char **)ft_memalloc(sizeof(char *) * size)))
		return (NULL);
	return (copy);
}

static size_t	get_origin_size(char **origin)
{
	size_t	size;

	size = 0;
	while (origin[size])
		size++;
	return (size);
}

char			**copy_array_str(char **origin)
{
	char	**copy;
	size_t	size;

	if (!origin)
		return (NULL);
	size = get_origin_size(origin);
	copy = allocate_memory(size + 1);
	copy_each_str(origin, copy);
	return (copy);
}
