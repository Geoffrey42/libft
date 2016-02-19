#include "../inc/libft.h"

int		main(void)
{
	char	s1[35] = "la mere michelle a perdu sa chatte";
	char	buf1[30];
	char	*ptr;
	char	buf2[30];
	char	*ptr2;

	ft_putstr("source string :");
	ft_putstr(s1);
	ft_putchar('\n');
	ptr = ft_memccpy(buf1, s1, 'u', 24);
	*ptr = '\0';
	ft_putstr("resultat buf1 :\n");
	ft_putstr(buf1);
	ft_putchar('\n');
	ft_putstr("taille buf1\n");
	ft_putnbr(ft_strlen(buf1));
	ft_putchar('\n');
	ptr2 = memccpy(buf2, s1, 'u', 24);
	*ptr2 = '\0';
	ft_putstr("resultat buf2 :\n");
	ft_putstr(buf2);
	ft_putchar('\n');
	ft_putstr("taille buf2\n");
	ft_putnbr(ft_strlen(buf2));
	ft_putchar('\n');
	return (0);
}
