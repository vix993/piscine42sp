/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:38:08 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/14 18:47:21 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main()
{
	char str[] = "iaejrgiergjr";
	char str0[] = "koejgiogrj23234kerjgeigr";
	char str1[] = "UFHUFEHUHW";
	char str2[] = "34124dw";
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str0));
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
}
