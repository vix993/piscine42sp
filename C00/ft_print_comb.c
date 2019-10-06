#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	a[3];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = a[0] + 1;
		while (b[1] <= '9')
		{
			a[2] = number [1] + 1;
			while (c[2] <= '9')
			{
				ft_putchar(a[0]);
				ft_putchar(a[1]);
				ft_putchar(a[2]);
				if (!(a[0] == '7' && a[1] == '8' && a[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			a[2]++;
			}
		a[1]++;
		}
	a[0]++;
	}
}

int	main()
{
	ft_print_comb(a);
	return 0;
}
