/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:47:09 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/11 19:45:34 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
	char src [] = "Hello Wurld";
	char dest [] = "there";

	printf("%s, %s\n", src, dest);
	printf("%s\n", ft_strncpy(dest, src, 4));
}
