/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:04:45 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 15:04:00 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char str[] = "Hi there James.";
	char str0[] = "hi There James 123";
	char str1[] = "424241";
	char str4[] = "414241";
	char str2[] = "Retrograde";
	char str3[] = "RetroGREEEYY";
	char str5[] = "aaaaaa";
	char str6[] = "AAAAAA";
	printf("%d, strncmp.\n", strncmp(str, str0, 19));
	printf("%d, mine.\n", ft_strncmp(str, str0, 19));
	printf("%d, strncmp.\n", strncmp(str1, str4, 3));
	printf("%d, mine.\n", ft_strncmp(str1, str4, 3));
	printf("%d, strncmp.\n", strncmp(str2, str3, 7));
	printf("%d, mine.\n", ft_strncmp(str2, str3, 7));
	printf("%d, strncmp.\n", strncmp(str5, str6, 5));
	printf("%d, mine.\n", ft_strncmp(str5, str6, 5));
}
