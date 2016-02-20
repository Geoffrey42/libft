/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 11:04:09 by ggane             #+#    #+#             */
/*   Updated: 2016/02/20 11:24:13 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			j = i;;
		i++;
	}
	if (j > 0)
	{
		p = (char *)s + j;
		return (p);
	}
	else if ((char)c == '\0')
	{
		p = (char *)s + i;
		return (p);
	}
	return (NULL);
}
