#include <stdio.h>
#include <ctype.h>
#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "a\nz\t4\rA\vZ";
	int		i;

	i = 0;
	printf("isprint :\n");
	while (s1[i])
		printf("%d\n", isprint(s1[i++]));
	i = 0;
	printf("ft_isprint :\n");
	while (s1[i])
		printf("%d\n", ft_isprint(s1[i++]));
	return (0);
}
