/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:10:05 by hbelle            #+#    #+#             */
/*   Updated: 2023/09/21 17:19:26 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_comb(int a, int b)
{
	if (a == 98)
	{
		write(1, &b, 1);
	}
	else
	{
		write(1, &b, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		c;
	int		b;

	b = 0;
	a = 0;
	c = 0;
	while (a <= 99)
	{
		c = a + 1;
		while (c <= 99)
		{
			b = a / 10 + 48;
			write(1, &b, 1);
			b = a % 10 + 48;
			write(1, &b, 1);
			write(1, " ", 1);
			b = c / 10 + 48;
			write(1, &b, 1);
			b = c % 10 + 48;
			ft_comb(a, b);
			c++;
		}
		a++;
	}
}
