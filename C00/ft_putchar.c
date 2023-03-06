#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('Z');
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}