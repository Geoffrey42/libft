#include <stdio.h>
#include <ctype.h>
#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "à été";
	int		i;

	i = 0;
	printf("isascii :\n");
	while (s1[i])
		printf("%d\n", isascii(s1[i++]));
	i = 0;
	printf("ft_isascii :\n");
	while (s1[i])
		printf("%d\n", ft_isascii(s1[i++]));
	return (0);
}
