#include <stdio.h>
#include <ctype.h>
#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "az42 AZ42";
	int		i;

	i = 0;
	printf("isalpha :\n");
	while (s1[i])
		printf("%d\n", isalpha(s1[i++]));
	i = 0;
	printf("ft_isalpha :\n");
	while (s1[i])
		printf("%d\n", ft_isalpha(s1[i++]));
	return (0);
}
