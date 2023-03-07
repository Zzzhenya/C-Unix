#include <unistd.h>

void	putchar(char c);

int	main(void)
{
	putchar('Z');
	putchar('\n');
	return (0);
}

void	putchar(char c)
{
	write (1, &c, 1);
}
