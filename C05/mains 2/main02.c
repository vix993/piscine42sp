/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:18:21 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/17 08:50:21 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main()
{
	int i, n, a, b, x, y, z, q, w, e;

	i = 0;
	n = 0;
	a = 5;
	b = 2;
	x = 10;
	y = 3;
	z = 4;
	q = 5;
	e = 10;
	w = 0;
	printf("%d power of %d = %d\n", i, n, ft_recursive_power(i, n));
	printf("%d power of %d = %d\n", a, b, ft_recursive_power(a, b));
	printf("%d power of %d = %d\n", x, y, ft_recursive_power(x, y));
	printf("%d power of %d = %d\n", z, q, ft_recursive_power(z, q));
	printf("%d power of %d = %d\n", e, w, ft_recursive_power(e, w));
}
