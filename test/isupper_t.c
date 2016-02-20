#include <stdio.h>
#include <ctype.h>
#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "az42 AZ42";
	int		i;

	i = 0;
	printf("isupper :\n");
	while (s1[i])
		printf("%d\n", isupper(s1[i++]));
	i = 0;
	printf("ft_isupper :\n");
	while (s1[i])
		printf("%d\n", ft_isupper(s1[i++]));
	return (0);
}
