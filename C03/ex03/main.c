/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:24:13 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 12:12:02 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int 	main()
{
	char str[50] = "Hello";
	char str1[50] = " World";
	char str11[50] = "d";
	char str2[50] = "Life";
	char str3[50] = " is Good, only always";
	char str33[50] = "Good, only always";
	char str4[50] = "Half-";
	char str5[50] = "Life is a good game";
	char str55[50] = " is a good game.";

	strncat(str, str1, 5);
	printf("%s, strncat\n", str);
	strncat(str2, str3, 4);
	printf("%s, strncat\n", str2);
	strncat(str4, str5, 4);
	printf("%s, strncat\n", str4);
	ft_strncat(str, str11, 6);
	printf("%s, mine\n", str);
	ft_strncat(str2, str33, 20);
	printf("%s, mine\n", str2);
	ft_strncat(str4, str55, 20);
	printf("%s, mine\n", str4);
}
