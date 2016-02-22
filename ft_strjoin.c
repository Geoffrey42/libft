/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 10:55:42 by ggane             #+#    #+#             */
/*   Updated: 2016/02/22 10:58:42 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;

	if (!s1 || !s2 || !(new = ft_strnew(ft_strlen((char *)s1)
	+ ft_strlen((char*)s2) + 1)))
		return (NULL);
	new = ft_strdup((char*)s1);
	new = ft_strcat(new, (char*)s2);
	new[ft_strlen(new)] = '\0';
	return (new);
}
