/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:47:04 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 16:10:43 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	char str[20] = "Good EVENING";
	char str0[20] = "MR. Bond.";
	char str1[20] = "Goodness gracious";
	char str2[20] = "Great balls of fire";
	char str3[50] = "Compeletely absotively";
	char str4[20] = "insaneballs";

	printf("%s, strlcat.\n", str, str0, 20);
	printf("%s, strlcat.\n", str1, str2, 20);
	printf("%s, strlcat.\n", str, str0, 20);
}

