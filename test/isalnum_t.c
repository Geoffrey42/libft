#include <stdio.h>
#include <ctype.h>
#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "az42 AZ42";
	int		i;

	i = 0;
	printf("isalnum :\n");
	while (s1[i])
		printf("%d\n", isalnum(s1[i++]));
	i = 0;
	printf("ft_isalnum :\n");
	while (s1[i])
		printf("%d\n", ft_isalnum(s1[i++]));
	return (0);
}
