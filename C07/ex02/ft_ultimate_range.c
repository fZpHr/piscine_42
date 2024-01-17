/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:54:25 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/03 17:42:10 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*rg;
	int	r;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	r = (max - min);
	rg = malloc(sizeof(int) * r + 1);
	if (rg == 0)
		return (0);
	while (min < max)
	{
		rg[i] = min;
		i++;
		min++;
	}
	rg[i] = '\0';
	*range = rg;
	return (r);
}
