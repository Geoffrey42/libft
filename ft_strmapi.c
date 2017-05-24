/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 20:13:40 by ggane             #+#    #+#             */
/*   Updated: 2016/04/18 20:14:47 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	map = ft_strdup(s);
	if (!map || !s || !f)
		return (NULL);
	while (map[i])
	{
		map[i] = f(i, map[i]);
		i++;
	}
	return (map);
}
