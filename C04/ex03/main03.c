/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 22:16:40 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/19 19:20:27 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main()
{
	char str1[] = "  ---+--+1234ab567";
	char str2[] = "24--21";
	char str3[] = "          ";
	char str4[] = "     +-42ds55";
	char str5[] = " --- +-21lf\n";
	int val = ft_atoi(str1);
	int val0 = ft_atoi(str2);
	int val1 = ft_atoi(str3);
	int val2 = ft_atoi(str4);
	int val3 = ft_atoi(str5);
	printf ("%d, should be -1234.\n", val);
	printf ("%d, should be 24.\n", val0);
	printf ("%d, should be ' '.\n", val1);
	printf ("%d, should be -42.\n", val2);
	printf ("%d, should be 21.\n", val3);
	return 0;
}
