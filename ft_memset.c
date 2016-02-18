#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned int	i;

	s = (unsigned char *)str;
	i = 0;
	while (i < n)
		s[i++] = (unsigned char)c;
	return (str);
}
