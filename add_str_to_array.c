/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_str_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 11:53:06 by ggane             #+#    #+#             */
/*   Updated: 2016/10/11 11:54:15 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		copy_and_add_target(char **source, char **copy, char *target)
{
	int		i;

	i = 0;
	while (source[i])
	{
		copy[i] = ft_strdup(source[i]);
		i++;
	}
	copy[i++] = ft_strdup(target);
	copy[i] = NULL;
}

static char		**allocate_memory(size_t size)
{
	char	**copy;

	if (!(copy = (char **)malloc(sizeof(char *) * size)))
		return (NULL);
	return (copy);
}

static size_t	get_source_size(char **source)
{
	size_t	size;

	size = 0;
	while (source[size])
		size++;
	return (size);
}

char			**add_str_to_array(char **source, char *target)
{
	char	**copy;
	size_t	size;

	size = get_source_size(source);
	copy = allocate_memory(size + 2);
	copy_and_add_target(source, copy, target);
	return (copy);
}
