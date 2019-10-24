/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:12:33 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 17:27:10 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main()
{
	char str[] = "How ar ar are you.";
	char str0[] = "are";
	char str1[] = "Life i is crazy.";
	char str2[] = "is";
	char str3[] = "Legendary Status Mate";
	char str4[] = " ";

	printf("%s, strstr.\n", strstr(str, str0));
	printf("%s, mine.\n", ft_strstr(str, str0));
	printf("%s, strstr.\n", strstr(str1, str2));
	printf("%s, mine.\n", ft_strstr(str1, str2));
	printf("%s, strstr.\n", strstr(str3, str4));
	printf("%s, mine.\n", ft_strstr(str3, str4));
}
