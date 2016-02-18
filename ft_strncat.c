/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 12:34:49 by ggane             #+#    #+#             */
/*   Updated: 2016/02/18 16:46:40 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		s;

	i = 0;
	s = 0;
	while (dest[s])
		s++;
	while (src[i] && i < nb)
	{
		dest[s] = src[i];
		s++;
		i++;
	}
	dest[s] = '\0';
	return (dest);
}
