/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:48:42 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/24 20:11:32 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkodd(char *str)
{
	int i;
	int o;

	i = 0;
	o = 0;
	while (str[i] != '\0' && !(str[i] > 47 && str[i] < 58))
	{
		if (str[i] == '-')
			o++;
		i++;
	}
	return (o % 2);
}

int		counttillnum(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (i);
		i++;
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int r;
	int sign;
	int i;

	checkodd(str);
	if (checkodd(str) == 1)
		sign = -1;
	else
		sign = 1;
	r = 0;
	i = counttillnum(str);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			r = r * 10 + str[i] - '0';
			i++;
		}
		else
			str[i] = '\0';
	}
	return (sign * r);
}
