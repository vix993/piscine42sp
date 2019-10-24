/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:09:31 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/14 17:52:06 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main()
{
	char str[] = "hello";
	printf("%d, should be 1\n", ft_str_is_lowercase(str));
	char str0[] = "Hello";
	printf("%d, should be 0\n", ft_str_is_lowercase(str0));
	char str1[] = "234124";
	printf("%d, should be 0\n", ft_str_is_lowercase(str1));
	char str2[] = "FUEHUEHUEFHaaasad";
	printf("%d, should be 0.", ft_str_is_lowercase(str2));
}
