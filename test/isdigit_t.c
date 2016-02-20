#include <stdio.h>
#include <ctype.h>
#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "az42 AZ42";
	int		i;

	i = 0;
	printf("isdigit :\n");
	while (s1[i])
		printf("%d\n", isdigit(s1[i++]));
	i = 0;
	printf("ft_isdigit :\n");
	while (s1[i])
		printf("%d\n", ft_isdigit(s1[i++]));
	return (0);
}
