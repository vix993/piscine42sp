/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:34:09 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/08 09:28:24 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char a;

	if (n < 0)
	{
		a = 'N';
		ft_putchar(a);
	}
	else
	{
		a = 'P';
		ft_putchar(a);
	}
}
