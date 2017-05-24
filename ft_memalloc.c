/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 11:17:00 by ggane             #+#    #+#             */
/*   Updated: 2016/12/18 00:01:49 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone_memoire;

	zone_memoire = malloc(size);
	if (zone_memoire)
	{
		ft_bzero(zone_memoire, size);
		return (zone_memoire);
	}
	else
		return (NULL);
}
