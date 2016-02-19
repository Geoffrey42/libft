/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 10:35:26 by ggane             #+#    #+#             */
/*   Updated: 2016/02/19 11:45:52 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char		*d2;
	unsigned char		*s2;
	unsigned int		i;

	d2 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		d2[i] = s2[i];
		if (d2[i] == (char)c)
			return ((void*)&d2[i + 1]);
		i++;
	}
	return (NULL);
}
