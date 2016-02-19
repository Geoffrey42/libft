#include "../inc/libft.h"

int		main(void)
{
	char	s1[] = "abc";
	char	s2[] = "ABC";
	int		r;

	ft_putstr("Comparison with memcmp :\n");
	if ((r = memcmp(s1, s2, ft_strlen(s2) + 1)) > 0)
	{
		ft_putstr("res : ");
		ft_putnbr(r);
		ft_putchar('\n');
		ft_putstr("s1 is superior to s2\n");
	}
	else if ((r = memcmp(s1, s2, ft_strlen(s2) + 1)) < 0)
	{
		ft_putstr("res : ");
		ft_putnbr(r);
		ft_putchar('\n');
		ft_putstr("s1 is inferior to s2\n");
	}
	else
	{
		ft_putstr("res : ");
		ft_putnbr(r);
		ft_putchar('\n');
		ft_putstr("s1 is equal to s2\n");
	}
	ft_putstr("Comparison with ft_memcmp :\n");
	if ((r = ft_memcmp(s1, s2, ft_strlen(s2) + 1)) > 0)
	{
		ft_putstr("res : ");
		ft_putnbr(r);
		ft_putchar('\n');
		ft_putstr("s1 is superior to s2\n");
	}
	else if ((r = ft_memcmp(s1, s2, ft_strlen(s2) + 1)) < 0)
	{
		ft_putstr("res : ");
		ft_putnbr(r);
		ft_putchar('\n');
		ft_putstr("s1 is inferior to s2\n");
	}
	else
	{
		ft_putstr("res : ");
		ft_putnbr(r);
		ft_putchar('\n');
		ft_putstr("s1 is equal to s2\n");
	}
	return (0);
}
