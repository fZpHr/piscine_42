/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:18:24 by hbelle            #+#    #+#             */
/*   Updated: 2023/09/22 19:25:01 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	fin;
	int	debut;	

	fin = size - 1;
	debut = 0;
	while (debut < fin)
	{
		tmp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = tmp;
		debut++;
		fin--;
	}
}
