/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 23:12:24 by ggane             #+#    #+#             */
/*   Updated: 2016/02/21 23:35:15 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = ft_strdup((char*)s);
	if (p[i])
	{
		p[i] = f(i, p[i]);
		i++;	
	}
	p[i] = '\0';
	return (p);
}
