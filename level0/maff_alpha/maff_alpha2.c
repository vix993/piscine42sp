/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:29:50 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 22:17:44 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		printodds()
{
	char i;

	i = 'a';
	while(i <= 'z')
	{
		if (i % 2 == 1)
			ft_putchar(i);
		else
			ft_putchar(i - 32);
		i++;
	}
}

int		main()
{
	printodds();
	return(0);
}
