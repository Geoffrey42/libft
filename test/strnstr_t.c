#include "../inc/libft.h"
#include <stdio.h>

int		main(void)
{
	const char s1[] = "http://www.tutorialspoint.com";
	const char s2[] = "http://www.tutorialspoint.com";
	const char *ch = "w";
	char *ret;

	printf("original string : %s\n", s1);
	ret = strnstr(s1, ch, 14);
	printf("strnstr : String after |%s| is - |%s|\n", ch, ret);
	ret = ft_strnstr((char *)s2, (char *)ch, 14);
	printf("ft_strnstr : String after |%s| is - |%s|\n", ch, ret);
	return (0);
}
