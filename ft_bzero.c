#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	unsigned int	i;
	int		c;

	p = (unsigned char *)s;
	i = 0;
	c = 0;
	while (i < n)
		p[i++] = (unsigned char)c;
}
