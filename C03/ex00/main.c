/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 09:12:17 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 09:56:02 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	char s1[] = "there";
	char s2[] = "their";
	char str[] = "Hello World";
	char str0[] = "Hi Whats Gwannin'";
	char str1[] = "CALL OF DUTY";
	char str2[] = "call of duty";
	printf("%d, strcmp orig.\n", strcmp(s1, s2));
	printf("%d, mine.\n", ft_strcmp(s1, s2));
	printf("%d, strcmp orig.\n", strcmp(str, str0));
	printf("%d, mine.\n", ft_strcmp(str, str0));
	printf("%d, strcmp orig.\n", strcmp(str1, str2));
	printf("%d, mine.\n", ft_strcmp(str1, str2));
}
