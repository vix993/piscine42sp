/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   made.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:21:45 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/07 16:35:30 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void)
{
	int x = 0;
	int y = 0;
	int a[4];

	while (x <= 99)
	{
		y = 0;
		while (y <= 99)
		{
			if (x > y)
			{
				a[0] = (y / 10) + 48;
				a[1] = (y % 10) + 48;
				a[2] = (x / 10) + 48;
				a[3] = (x % 10) + 48;
				ft_putchar(a[0]);
				ft_putchar(a[1]);
				ft_putchar(' ');
				ft_putchar(a[2]);
				ft_putchar(a[3]);
				if (!(y == 98 && x == 99))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				if (y == 98 && x == 99)
				{
					ft_putchar('\n');
				}
			}
			y++;
		}
		x++;
	}
}
