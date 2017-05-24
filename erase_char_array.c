/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_char_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:56:00 by ggane             #+#    #+#             */
/*   Updated: 2016/12/28 10:13:13 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	erase_char_array(char **array)
{
	int		i;

	i = 0;
	if (!array)
		return ;
	while (array[i])
	{
		ft_strdel(&array[i]);
		i++;
	}
	free(array);
	array = NULL;
}
