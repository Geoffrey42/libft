/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 09:14:09 by ggane             #+#    #+#             */
/*   Updated: 2016/02/21 23:28:47 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (cpy == NULL)
		return (NULL);
	else
		ft_strcpy(cpy, src);
	return (cpy);
}
