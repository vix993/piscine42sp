/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:51:19 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/14 19:00:17 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int main()
{
	char str[] = "GODDAMN LOOK AT EM TITTIES";
	char str0[] = "damn.";
	char str1[] = "what the HELL";
	char str2[] = "39938290238904HE";
	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str0));
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
}
