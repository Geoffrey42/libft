#include "../inc/libft.h"
#include <stdio.h>

int		main(void)
{
	const char s1[] = "http://www.tutorialspoint.com";
	const char s2[] = "http://www.tutorialspoint.com";
	const char ch = '\0';
	char *ret;

	ret = strchr(s1, ch);
	printf("strchr : String after |%c| is - |%s|\n", ch, ret);
	ret = ft_strchr(s2, ch);
	printf("ft_strchr : String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
