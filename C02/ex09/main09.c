/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 08:45:54 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 09:09:41 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char str[] = "hello D how are you";
	char str0[] = "HELLO HOW ARE YOU";
	char str1[] = "I'm fine thanks people";
	char str2[] = "12 fin 23her leffen";
	printf("%s, should be: Hello D How Are You\n", ft_strcapitalize(str));
	printf("%s, should be: Hello How Are You\n", ft_strcapitalize(str0));
	printf("%s, should be: I'm Fine Thanks People\n", ft_strcapitalize(str1));
	printf("%s, should be: 12 Fin 23her Leffen\n", ft_strcapitalize(str2));
}
