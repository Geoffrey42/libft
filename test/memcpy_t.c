#include "../inc/libft.h"

int		main(void)
{
	const char	s1[21] = "Demain des l'aube...";
	char		d1[21] = "Une poule sur un mur";
	const char	s2[21] = "Demain des l'aube...";
	char		d2[21] = "Une poule sur un mur";

	ft_putstr("dest avant ft_memcpy :\n");
	ft_putstr(d1);
	ft_putchar('\n');
	ft_memcpy(d1, s1, ft_strlen((char*)s1) + 1);
	ft_putstr("dest apres ft_memcpy :\n");
	ft_putstr(d1);
	ft_putchar('\n');
	ft_putstr("dest avant memcpy :\n");
	ft_putstr(d2);
	ft_putchar('\n');
	memcpy(d2, s2, ft_strlen((char*)s2)+ 1);
	ft_putstr("dest apres memcpy :\n");
	ft_putstr(d2);
	ft_putchar('\n');
	return (0);
}
