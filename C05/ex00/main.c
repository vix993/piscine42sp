/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:14:08 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/16 20:56:49 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main()
{
	int i, n, x, y, a, b;

	i = 0;
	n = 5;
	x = 7;
	y = 8;
	a = 9;
	b = 12;
	printf("%d! = %d\n", i, ft_iterative_factorial(i));
	printf("%d! = %d\n", n, ft_iterative_factorial(n));
	printf("%d! = %d\n", x, ft_iterative_factorial(x));
	printf("%d! = %d\n", y, ft_iterative_factorial(y));
	printf("%d! = %d\n", a, ft_iterative_factorial(a));
	printf("%d! = %d\n", b, ft_iterative_factorial(b));
}
