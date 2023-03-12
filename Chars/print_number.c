#include <unistd.h>
#include <stdlib.h>

void	print_number(int nb);
void	print_digits(void);
void	putcharacter(char c);

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_digits();
		print_number(atoi(argv[1]));
		write (1, "\n", 1);
	}
	return (0);
}


/* Write 0 to 9 and line break */
void	print_digits(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		write (1, &i, 1);
		i ++;
	}
	write (1, "\n", 1);
}

/* Write any number in int range */
void	print_number(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		putcharacter('-');
		print_number(-nb);
	}
	else if (nb > 9)
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
	else
		putcharacter(nb + 48);
}

/* write character */
void	putcharacter(char c)
{
	write (1, &c, 1);
}