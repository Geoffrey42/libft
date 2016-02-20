/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 10:43:07 by ggane             #+#    #+#             */
/*   Updated: 2016/02/20 10:57:03 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			p = (char *)s + i;
			return (p);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		p = (char *)s + i;
		return (p);
	}
	return (NULL);
}
