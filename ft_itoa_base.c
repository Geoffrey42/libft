/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 13:52:54 by ggane             #+#    #+#             */
/*   Updated: 2016/05/02 09:14:58 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	check_base(int base)
{
	if (base < 2 || base > 16)
		return (1);
	return (0);
}

static int	taille_str(long long int value, int base)
{
	int		i;

	i = 1;
	if (value < 0 && base == 10)
	{
		value = value * -1;
		i = i + 1;
	}
	else if (value < 0 && base != 10)
		return (-1);
	while (value >= base)
	{
		value = value / base;
		i++;
		if (value < base)
			return (i);
	}
	return (i);
}

static char	*rempli_str(char *str, long long int value, int len, int base)
{
	int		debut;
	char	*base_template;

	base_template = "0123456789ABCDEF";
	str[len] = '\0';
	len = len - 1;
	if (value < 0)
	{
		value = value * -1;
		debut = 1;
		str[0] = '-';
	}
	else
		debut = 0;
	while (len >= debut)
	{
		str[len] = base_template[value % base];
		value = value / base;
		len--;
	}
	return (str);
}

char		*ft_itoa_base(int value, int base)
{
	char			*str_base;
	int				len;
	long long int	llvalue;

	llvalue = value;
	if (check_base(base))
		return (NULL);
	len = taille_str(llvalue, base);
	str_base = ft_strnew(len);
	if (!str_base)
		return (NULL);
	str_base = rempli_str(str_base, llvalue, len, base);
	return (str_base);
}
