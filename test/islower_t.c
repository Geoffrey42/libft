#include <stdio.h>
#include <ctype.h>
#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "az42 AZ42";
	int		i;

	i = 0;
	printf("islower :\n");
	while (s1[i])
		printf("%d\n", islower(s1[i++]));
	i = 0;
	printf("ft_islower :\n");
	while (s1[i])
		printf("%d\n", ft_islower(s1[i++]));
	return (0);
}
