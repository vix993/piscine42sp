/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 22:19:47 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 23:16:16 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	excludespecial(char *str, int j)
{
	return ('a');	
}

int	checkodd(char *str)
{


int		ft_atoi(const char *str)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res);
}

#include <stdlib.h>
#include <stdio.h>

int		main()
{
	{
		char *s = "000123~ç~9ç9sdfsa123";
		int d = atoi(s);
		printf("%d\n", d);
	}
	{
		char *s = " -0123~ç~9ç9sdfsa123";
		int d = atoi(s);
		printf("%d\n", d);
	}
	{
		char *s = "-345";
		int d = atoi(s);
		printf("%d\n", d);
	}
	{
		char *s = "--345";
		int d = atoi(s);
		printf("%d\n", d);
	}
	{
		char *s = "+345";
		int d = atoi(s);
		printf("%d\n", d);
	}
	{
		char *s = "++345";
		int d = atoi(s);
		printf("%d\n", d);
	}
	return (0);


}
