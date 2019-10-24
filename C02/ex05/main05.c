/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:57:10 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/14 18:07:21 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main()
{
	char str[] = "UEFHUEHF";
	char str0[] = "fgesrgerg";
	char str1[] = "9134809124UFHUHEF";
	char str2[] = "D333fffD";
	char str3[] = "";
	printf("%d, should be 1\n", ft_str_is_uppercase(str));
	printf("%d, should be 0\n", ft_str_is_uppercase(str0));
	printf("%d, should be 0\n", ft_str_is_uppercase(str1));
	printf("%d, should be 0\n", ft_str_is_uppercase(str2));
	printf("%d, should be 1\n", ft_str_is_uppercase(str3));
}
