/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_str_from_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 08:25:24 by ggane             #+#    #+#             */
/*   Updated: 2016/10/11 08:36:18 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		search_target(char *src, char *target)
{
	if (ft_strstr(src, target))
	{
		free(target);
		return (1);
	}
	return (0);
}

char			*copy_str_from_array(char **origin, char *target)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	if (!origin || !target)
		return (NULL);
	target = ft_strjoin(target, "=");
	len = ft_strlen(target);
	while (origin[i])
	{
		if (search_target(origin[i], target))
			return (ft_strdup(origin[i] + len));
		i++;
	}
	free(target);
	return (NULL);
}
