/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:49:44 by hbelle            #+#    #+#             */
/*   Updated: 2023/09/23 16:33:37 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		tmp;
	int		apres;
	int		debut;
	int		x;

	x = 0;
	tmp = 0;
	while (x <= size)
	{	
		debut = 0;
		apres = debut + 1;
		while (apres != size)
		{
			if (tab[debut] > tab[apres])
			{
				tmp = tab[debut];
				tab[debut] = tab[apres];
				tab[apres] = tmp;
			}
			debut++;
			apres++;
		}
		x++;
	}
}
