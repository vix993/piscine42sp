/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:36:04 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/17 12:00:32 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nv);

int main()
{
	int i, n, b, a, l, f, k;

	i = 16;
	n = 4;
	b = 5;
	a = 9;
	l = -1;
	f = 0;
	k = 21;
	printf("sqrt %d = %d\n", i, ft_sqrt(i));
	printf("sqrt %d = %d\n", n, ft_sqrt(n));
	printf("sqrt %d = %d\n", b, ft_sqrt(b));
	printf("sqrt %d = %d\n", a, ft_sqrt(a));
	printf("sqrt %d = %d\n", l, ft_sqrt(l));
	printf("sqrt %d = %d\n", f, ft_sqrt(f));
	printf("sqrt %d = %d\n", k, ft_sqrt(k));
}
