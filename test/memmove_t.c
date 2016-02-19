#include "../inc/libft.h"
#include <stdio.h>

int		main(void)
{
	char d1[] = "oldstring    ";
	char d2[] = "oldstring    ";
	const char src[]  = "mynewstring";

	printf("Before memmove\n d1 = %s, src = %s\n", d1, src);
	memmove(d1, src, 9);
	printf("After memmove\n d1 = %s, src = %s\n", d1, src);
	printf("Before ft_memmove\n d2 = %s, src = %s\n", d2, src);
	ft_memmove(d2, src, 9);
	printf("After ft_memmove\n d2 = %s, src = %s\n", d2, src);
	return(0);
}
