/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:44:59 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 11:23:19 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main()
{
	int n;
	char str[50] = "Hello";
	char str0[50] = " World";
	char str1[50] = "Good";
	char str2[50] = " morning";
	char str3[50] = "Welcome";
	char str4[50] = " Home";
	
	n = 1;
	if (n == 1)
	{
		strcat(str, str0);
		printf("%s, strcat.\n", str);
		strcat(str1, str2);
		printf("%s, strcat.\n", str1);
		strcat(str3, str4);
		printf("%s, strcat.\n", str3);
	}
	n = 0;
	if (n == 0)
	{
		ft_strcat(str, str0);
		printf("%s, mine.\n", str);
		ft_strcat(str1, str2);
		printf("%s, mine.\n", str1);
		ft_strcat(str3, str4);
		printf("%s, mine.\n", str3);
	}

}
