/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 21:57:26 by ggane             #+#    #+#             */
/*   Updated: 2016/02/21 22:18:49 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	if((new = (char*)malloc(sizeof(char) * size + 1)))
	{
		ft_bzero((void*)new, size);
		new[size + 1] = '\0';
		return (new);
	}
	else
		return (NULL);
}
