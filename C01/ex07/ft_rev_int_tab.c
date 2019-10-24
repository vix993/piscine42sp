/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:06:42 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/09 17:44:28 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int c;
	int f;
	int temp;

	c = 0;
	f = size - 1;
	while (c < f)
	{
		temp = tab[c];
		tab[c] = tab[f];
		tab[f] = temp;
		c++;
		f--;
	}
}
