#include "../inc/libft.h"
#include <stdio.h>

int		main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret1;
	char *ret2;

	ft_putstr((char*)str);
	ft_putchar('\n');
	ret1 = memchr(str, ch, strlen(str));
	ret2 = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret1);
	printf("String after |%c| is - |%s|\n", ch, ret2);
	return (0);
}
