#include "../inc/libft.h"
#include <stdio.h>

int		main(void)
{
	const char s1[] = "http://www.tutorialspoint.com";
	const char s2[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	printf("original string : %s\n", s1);
	ret = strrchr(s1, ch);
	printf("strrchr : String after |%c| is - |%s|\n", ch, ret);
	ret = ft_strrchr(s2, ch);
	printf("ft_strrchr : String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
