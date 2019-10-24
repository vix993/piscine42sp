/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:07:28 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/16 11:22:58 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main()
{
	char str[] = "Hello World";
	char str0[] = "Sleepy little Town";
	char str1[] = "Can't catch no zzz's";

	printf("%d, should be 11\n", ft_strlen(str));
	printf("%d, should be 18\n", ft_strlen(str0));
	printf("%d, should be 20\n", ft_strlen(str1));
}
