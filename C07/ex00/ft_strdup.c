/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 09:36:00 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 18:58:57 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(len + 1);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
