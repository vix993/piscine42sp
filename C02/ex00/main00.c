/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:55:58 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 17:06:20 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char src[20] = "Hello Wurld";
	char dest[20] = "there";

	printf("%s, %s\n", src, dest);
	printf("%s, mine.\n", ft_strcpy(dest, src));
	printf("%s, strcpy.\n", strcpy(dest, src));
	
	return(0);
}
