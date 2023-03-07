#include <unistd.h>

void	ft_print_alphabet(void);
void	ft_print_reverse(void);
void	ft_alternate(void);

int main(void)
{
	ft_print_alphabet();
	ft_print_reverse();
	ft_alternate();
	return (0);
}

void	ft_print_alphabet(void)
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

void	ft_print_reverse(void)
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

void	ft_alternate(void)
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
