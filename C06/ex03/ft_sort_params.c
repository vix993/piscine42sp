/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:36:20 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/21 21:52:34 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	c1 = 0;
	c2 = 0;
	i = 0;
	while (c1 == c2)
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 == '\0')
			return (c1 - c2);
		i++;
	}
	return (c1 - c2);
}

void	ft_sort(int n, char **s)
{
	int			i;
	int			j;
	char		*temp;

	i = 1;
	while (i < n)
	{
		j = i;
		while (j > 0 && ft_strcmp(s[j - 1], s[j]) > 0)
		{
			temp = s[j - 1];
			s[j - 1] = s[j];
			s[j] = temp;
			j--;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort(argc - 1, argv + 1);
	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
