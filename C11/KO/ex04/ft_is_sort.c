/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:14:47 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/12 16:41:02 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < length)
	{
		if ((*f)(tab[i], tab[j] > 0))
			return (0);
		i++;
		j++;
	}
	return (1);
}
