/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 10:45:01 by ggane             #+#    #+#             */
/*   Updated: 2016/02/22 10:59:20 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s || !(new = ft_strnew(len)))
		return (NULL);
	while (start > 0)
	{
		s++;
		start--;
	}
	ft_strncpy(new, (char*)s, len);
	new[len] = '\0';
	return (new);
}
