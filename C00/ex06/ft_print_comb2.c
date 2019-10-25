/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   made.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:21:45 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/08 16:18:50 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printit(int x, int y)
{
	int a[4];

	a[0] = (y / 10) + 48;
	a[1] = (y % 10) + 48;
	a[2] = (x / 10) + 48;
	a[3] = (x % 10) + 48;
	ft_putchar(a[0]);
	ft_putchar(a[1]);
	ft_putchar(' ');
	ft_putchar(a[2]);
	ft_putchar(a[3]);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x <= 99)
	{
		y = 0;
		while (y <= 99)
		{
			if (x > y)
			{
				ft_printit(x, y);
				if (!(y == 98 && x == 99))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
}
