/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 10:59:49 by ggane             #+#    #+#             */
/*   Updated: 2016/02/22 11:02:56 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	char	*new_s;

	if (!s)
		return (NULL);
	i = 0;
	while (s && ft_iswhsep(s[i]) == 1)
		i++;
	start = i;
	if (s[start] == '\0')
		return (ft_strdup(""));
	i = ft_strlen((char*)s);
	while (s && ft_iswhsep(s[--i]) != 0)
		;
	if (!(new_s = ft_strnew((i - start) + 1)))
		return (NULL);
	new_s = ft_strsub(s, start, (i - start) + 1);
		return (new_s);
}
