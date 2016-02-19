#include "../inc/libft.h"

int		main(void)
{
	char	s1[30];
	char	s2[30];

	ft_strcpy(s1, "Ceci est ma chaine de test.\n");
	ft_strcpy(s2, "Ceci est ma chaine de test2\n");
	ft_putstr(s1);
	ft_putstr(s2);
	ft_bzero(s1, 7);
	bzero(s2, 7);
	ft_putstr(s1);
	ft_putstr(s2);
	return (0);
}
