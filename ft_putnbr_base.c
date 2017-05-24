/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/26 13:06:41 by ggane             #+#    #+#             */
/*   Updated: 2016/04/27 19:09:50 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_doublons_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

static int	check_char_base(char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

static int	check_len_base(char *base)
{
	if (ft_strlen(base) <= 1 || base == NULL)
		return (1);
	return (0);
}

static int	check_base(char *base)
{
	if (check_len_base(base))
		return (1);
	if (check_char_base(base))
		return (1);
	if (check_doublons_base(base))
		return (1);
	return (0);
}

void		ft_putnbr_base(int nbr, char *base)
{
	long long int		dividende;
	size_t				choix_base;

	if (check_base(base))
		return ;
	dividende = nbr;
	choix_base = ft_strlen(base);
	if (dividende < 0)
	{
		ft_putchar('-');
		dividende = -dividende;
	}
	if (dividende >= (long long int)choix_base)
	{
		ft_putnbr_base(dividende / choix_base, base);
		ft_putchar(base[dividende % choix_base]);
	}
	else
		ft_putchar(base[dividende % choix_base]);
}
