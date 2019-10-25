/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 23:18:14 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 23:44:35 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		findpos(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' || str[i] != '\t')
	{
		i++;
	}
	return (i);
}

void 	ft_print1(char *str)
{
	int i;
	
	i = findpos(str);
	while(!(str[i] == ' ' || str[i] == '\t'))
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
		ft_putchar('\n');
	else
		ft_print1(argv[0]);
}
