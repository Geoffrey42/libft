/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 11:32:06 by ggane             #+#    #+#             */
/*   Updated: 2016/02/20 13:15:41 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	unsigned int	i;
	int				j;
	char			*pt;

	i = 0;
	pt = 0;
	if (to_find[i] == '\0')
		return (str);
	while (i < n)
	{
		if (str[i] == to_find[0])
		{
			pt = str + i;
			j = 0;
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (pt);
				j++;
			}
			pt = 0;
		}
		i++;
	}
	return (0);
}
