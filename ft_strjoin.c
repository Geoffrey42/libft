/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 07:26:39 by ggane             #+#    #+#             */
/*   Updated: 2016/05/08 16:12:07 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_join(char *dst, char const *s2, unsigned int i, char *tmp)
{
	size_t			len;
	unsigned int	j;

	len = ft_strlen(tmp);
	j = 0;
	while (j < len)
	{
		dst[i] = tmp[j];
		i++;
		j++;
	}
	if (tmp == s2)
		return (dst);
	return (fill_join(dst, s2, i, (char *)s2));
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t			size;
	char			*join;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	join = ft_memalloc(size + 1);
	if (!join)
		return (NULL);
	i = 0;
	fill_join(join, s2, i, (char *)s1);
	return (join);
}
