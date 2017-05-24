/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrdl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 09:31:29 by ggane             #+#    #+#             */
/*   Updated: 2016/12/01 09:33:01 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrdl(int n)
{
	long long int		lli;

	lli = n;
	if (lli < 0)
	{
		ft_putchar('-');
		lli = -lli;
	}
	if (lli > 9)
	{
		ft_putnbr(lli / 10);
		ft_putchar((lli % 10) + '0');
	}
	else
		ft_putchar(lli + '0');
	ft_putchar('\n');
}
