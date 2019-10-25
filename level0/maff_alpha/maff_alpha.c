/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:28:10 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 20:40:58 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printalph()
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if ((i % 2) == 1)
			ft_putchar(i);
		else
			ft_putchar(i - 32);
		i++;
	}
	ft_putchar('\n');
}

int		main()
{
	printalph();
}
