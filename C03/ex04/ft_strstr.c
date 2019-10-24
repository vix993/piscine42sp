/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:17:57 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/23 14:21:32 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int a;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		a = i;
		while (str[i] == to_find[j])
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (str + a);
		}
		i = a;
		i++;
	}
	return (0);
}
