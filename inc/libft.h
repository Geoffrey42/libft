/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 08:43:32 by ggane             #+#    #+#             */
/*   Updated: 2016/02/21 17:14:09 by ggane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_atoi(char *str);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
unsigned int	ft_ustrlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char			*ft_strncat(char *dest, char *src, int nb);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(char *str, char *to_find, size_t n);
void			*ft_memset(void *str, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *restrict dst, const void *restrict src,
				size_t n);
void			*ft_memccpy(void *restrict dst, const void *restrict src,
				int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_isalpha(int c);
int				ft_isupper(int c);
int				ft_islower(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

#endif
