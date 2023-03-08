#include <unistd.h>

void	print_alphabet(void);
void	print_reverse(void);
void	alternate(void);

int main(void)
{
	print_alphabet();
	print_reverse();
	alternate();
	return (0);
}

/* print the alphabet - lower case */
void	print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		write (1, &i, 1);
		i ++;
	}
	write (1, "\n", 1);
}

/* print the alphabet in reverse - lower case */
void	print_reverse(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		write (1, &i, 1);
		i --;
	}
	write (1, "\n", 1);
}

/* print the alphabet with alternative case */
void	alternate(void)
{
	int i;
	int cap;

	i = 'a';
	while (i <= 'z')
	{
		cap = (i - 31);
		write (1, &i, 1);
		write (1, &cap, 1);
		i = i + 2;
	}
	write (1, "\n", 1);
}
