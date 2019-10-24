/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:14:08 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/16 21:27:35 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main()
{
	int i, n, x, y, a, b;

	i = 0;
	n = 5;
	x = 7;
	y = -1;
	a = 9;
	b = 12;
	printf("%d! = %d\n", i, ft_recursive_factorial(i));
	printf("%d! = %d\n", n, ft_recursive_factorial(n));
	printf("%d! = %d\n", x, ft_recursive_factorial(x));
	printf("%d! = %d\n", y, ft_recursive_factorial(y));
	printf("%d! = %d\n", a, ft_recursive_factorial(a));
	printf("%d! = %d\n", b, ft_recursive_factorial(b));
}
