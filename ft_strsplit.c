/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 17:33:06 by ggane             #+#    #+#             */
/*   Updated: 2016/12/19 15:00:14 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_word_nb(char const *s, char c)
{
	int		nb_mots;
	int		i;

	nb_mots = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			nb_mots++;
		if (s[i] != c && (i > 0 && s[i - 1] == c))
			nb_mots++;
		i++;
	}
	return (nb_mots);
}

static char		*walkthrough_str(char **ptr, char c, int i)
{
	char	*mot;

	mot = NULL;
	while (**ptr)
	{
		if (i == 0 && **ptr != c)
		{
			mot = *ptr;
			break ;
		}
		if (**ptr != c && *(*ptr - 1) == c && i - 1 >= 0)
		{
			mot = *ptr;
			break ;
		}
		*ptr = *ptr + 1;
		i++;
	}
	if (*(*ptr + 1) != '\0')
		*ptr = *ptr + 1;
	return (mot);
}

static char		*isolate_word(char *mot, size_t size)
{
	char	*tmp;

	tmp = ft_strdup(mot);
	mot = ft_strnew(size);
	mot = ft_strncpy(mot, tmp, size);
	free(tmp);
	tmp = NULL;
	return (mot);
}

static size_t	cut_word(char *mot, char c)
{
	size_t	size;

	size = 0;
	while (mot[size] != '\0' && mot[size] != c)
		size++;
	return (size);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		nb_mots;
	char	*ptr_s;
	int		i;
	size_t	size;

	if (s == NULL)
		return (NULL);
	i = 0;
	ptr_s = (char *)s;
	nb_mots = get_word_nb(s, c);
	if (!(split = (char **)ft_memalloc(sizeof(*split) * (nb_mots + 1))))
		return (NULL);
	while (i < nb_mots)
	{
		split[i] = walkthrough_str(&ptr_s, c, i);
		size = cut_word(split[i], c);
		split[i] = isolate_word(split[i], size);
		i++;
	}
	split[i] = NULL;
	return (split);
}
