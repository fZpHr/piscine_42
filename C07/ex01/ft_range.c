/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:24:48 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/03 17:43:34 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	r;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	r = (max - min);
	range = malloc(sizeof(int) * r + 1);
	if (range == 0)
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	range[i] = '\0';
	return (range);
}
