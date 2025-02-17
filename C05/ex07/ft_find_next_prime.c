/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:05:14 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/21 09:03:57 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;

	while (1)
	{
		i = 2;
		while (nb % i != 0)
			i++;
		if (i == nb)
			return (nb);
		else
			nb++;
	}
	return (0);
}
