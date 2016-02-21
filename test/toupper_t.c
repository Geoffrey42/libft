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
	printf("toupper :\n");
	while (s1[i])
		printf("%d\n", toupper(s1[i++]));
	i = 0;
	printf("ft_toupper :\n");
	while (s1[i])
		printf("%d\n", ft_toupper(s2[i++]));
	return (0);
}
