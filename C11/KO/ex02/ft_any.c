/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:57:43 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/12 16:38:33 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		(*f)(tab[i]);
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
