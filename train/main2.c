#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int a;

	a = 0;
	while (c[a] != '\0')
	{
		ft_putchar(c[a]);
		a++;
	}
}

int main(int argc, char **argv)
{
	int b;

	b = 1;
	while (b <= argc - 1)
	{
		ft_putstr(argv[b]);
		ft_putchar('\n');
		b++;
	}
}
