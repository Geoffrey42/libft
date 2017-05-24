/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/10 22:45:15 by ggane             #+#    #+#             */
/*   Updated: 2016/04/10 22:53:23 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (copy == NULL)
		return (NULL);
	else
		copy = ft_strcpy(copy, s1);
	return (copy);
}
