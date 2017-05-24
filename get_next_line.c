/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 10:20:54 by ggane             #+#    #+#             */
/*   Updated: 2016/12/27 12:39:51 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*fill_stock(int fd, char *stock)
{
	char		buf[BUFF_SIZE + 1];
	char		*del;
	int			ret;

	ft_bzero(buf, BUFF_SIZE + 1);
	while (!ft_strchr(buf, '\n'))
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (NULL);
		buf[ret] = '\0';
		del = stock;
		stock = ft_strjoin(stock, buf);
		ft_memdel((void **)&del);
		if (ret == 0 && ft_strlen(buf) == 0)
			break ;
	}
	ft_strclr((char *)buf);
	return (stock);
}

static char		*cut_previous_content(char *str, char *prev)
{
	char		*del;

	del = str;
	str = ft_strsub(str, ft_strlen(prev) + 1, ft_strlen(str) - ft_strlen(prev));
	ft_strdel(&del);
	return (str);
}

static size_t	size_till_next_newline(char *str)
{
	size_t		size;

	size = 0;
	while (str[size] != '\n' && str[size] != '\0')
		size++;
	return (size);
}

static char		*until_newline(char *str)
{
	size_t		size;
	char		*before;

	size = size_till_next_newline(str);
	before = ft_strsub(str, 0, size);
	return (before);
}

int				get_next_line(const int fd, char **line)
{
	static t_cell	gnl;
	char			*prev;

	if (fd < 0 || BUFF_SIZE < 0 || line == NULL)
		return (-1);
	if (gnl.prev_fd != fd)
	{
		ft_memdel((void **)&gnl.stock);
		gnl.prev_fd = fd;
	}
	if (!gnl.stock)
		gnl.stock = ft_strnew(0);
	if ((gnl.stock = fill_stock(fd, gnl.stock)) == NULL)
		return (-1);
	prev = until_newline(gnl.stock);
	*line = ft_strdup(prev);
	if (ft_strlen(gnl.stock) == 0 && ft_strlen(prev) == 0)
	{
		ft_strdel(&prev);
		ft_strdel(&gnl.stock);
		return (0);
	}
	gnl.stock = cut_previous_content(gnl.stock, prev);
	ft_strdel(&prev);
	return (1);
}
