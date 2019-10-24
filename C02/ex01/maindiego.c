/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maindiego.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:44:21 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/16 09:48:58 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
	char src [] = "Hello Wurld";
	char dest [] = "there";

	printf("antes = %s, %s\n", src, dest);
	printf("depois = %s\n", ft_strncpy(dest, src, 4));
	printf("strncpy = %s\n", strncpy(dest, src, 4));
}

