/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:12:04 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 17:15:40 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int 	main()
{
	char str[] = " '\x2' ";
	char str0[] = " oekwrgoker";
	char str1[] = " FEIHFIEJFIJ21312\x1";
	char str2[] = "\x3\x2\x5";
	char str3[] = "FWEIOJEFIWJ#(#$*(#$@)!?:|C`_#";
	printf("%d, should be 0\n", ft_str_is_printable(str));
	printf("%d, should be 1\n", ft_str_is_printable(str0));
	printf("%d, should be 0\n", ft_str_is_printable(str1));
	printf("%d, should be 0\n", ft_str_is_printable(str2));
	printf("%d, should be 1\n", ft_str_is_printable(str3));
}
