#include<unistd.h>

/* Write the string passed as the first argument */
void	putstr(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		putstr(argv[1]);
	return (0);
}

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	write (1, str, i);
	write (1, "\n", 1);
}