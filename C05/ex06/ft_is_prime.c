/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:37:07 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/02 14:45:24 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	t;

	t = 0;
	i = nb;
	while (t * t <= nb)
	{
		if (t > i)
			return (t);
		t++;
	}
	return (t);
}

int	ft_is_prime(int nb)
{
	long int	i;
	long int	j;
	long int	count;

	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	count = ft_sqrt(nb);
	j = 2;
	i = nb;
	while (j <= count)
	{
		if (i % j == 0)
			return (0);
		j++;
	}
	return (1);
}
