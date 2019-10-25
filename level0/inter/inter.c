/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:22:58 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 14:12:50 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	charcheck(char **str)
{
	int i;
	int j;

	j = 0;
	while (str[1][j] != 0)
	{
		i = 0;
		while (str[2][i] != 0)
		{

			if (str[1][j] == str[2][i] && str[1][i] != str[1][i - 1])
			{
				ft_putchar(str[1][j]);
				break;
			}
			i++;
		}
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
	}
	charcheck(argv);
	return (0);
}
