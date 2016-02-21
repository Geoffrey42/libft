#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>
#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "az42 AZ42";
	char	s2[] = "az42 AZ42";
	int		i;

	i = 0;
	printf("tolower :\n");
	while (s1[i])
		printf("%d\n", tolower(s1[i++]));
	i = 0;
	printf("ft_tolower :\n");
	while (s1[i])
		printf("%d\n", ft_tolower(s2[i++]));
	return (0);
}
