/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 09:35:08 by vnascime          #+#    #+#             */
/*   Updated: 2019/10/16 21:29:39 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
			return (c1 - c1);
	}
	return (c1 - c2);
}
