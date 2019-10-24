/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:54:07 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/15 17:11:28 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
	char str[] = "a3114214142";
	printf("%d, should be 0\n", ft_str_is_numeric(str));
	char str0[] = "31441241";
	printf("%d, should be 1\n", ft_str_is_numeric(str0));
	return (0);
}
