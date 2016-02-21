#include "../inc/libft.h"
#include <stdio.h>

int		main(void)
{
	char	s1[] = "Mon fils";
	char	*s2;
	char	*s3;

	s2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (s2)
		ft_strcpy(s2, s1);
	s3 = ft_memalloc(ft_strlen(s1) + 1);
	ft_strcpy(s3, s1);
	printf("original string : %s\n", s1);
	printf("with malloc : %s\n size s2 : %d\nwith ft_memalloc : %s\n size s3 : %d\n", s2, ft_strlen(s2), s3, ft_strlen(s3));
	free(s2);
	ft_memdel((void *)&s3);
	printf("s2 : %s\n size s2 : %d\n", s2, ft_strlen(s2));
	printf("s3 : %s\n size s3 : %d\n", s3, ft_strlen(s3));
}
