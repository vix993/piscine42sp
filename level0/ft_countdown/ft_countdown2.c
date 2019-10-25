/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:20:08 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 20:28:10 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(int n)
{

}


int	main()
{
	char i;

	i = '9';
	while (i >= '0')
	{
		ft_putchar(i--);
	}
	ft_putchar('\n');
	return (0);
}
