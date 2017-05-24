/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 11:26:23 by ggane             #+#    #+#             */
/*   Updated: 2016/05/07 10:54:18 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		taille_str(long long int n)
{
	long long int	i;

	i = 1;
	if (n < 0)
		n = n * -1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*rempli_str(char *str, long long int n, int len)
{
	int		debut;

	str[len] = '\0';
	len = len - 1;
	if (n < 0)
	{
		n = n * -1;
		debut = 1;
		str[0] = '-';
	}
	else
		debut = 0;
	while (len >= debut)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				len;
	long long int	lln;

	lln = n;
	len = taille_str(lln);
	if (lln < 0)
		len = len + 1;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str = rempli_str(str, lln, len);
	return (str);
}
