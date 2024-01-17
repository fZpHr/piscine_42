/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_packets.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorlac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:36:28 by adorlac           #+#    #+#             */
/*   Updated: 2023/10/08 17:38:17 by adorlac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_printnumb(char *av);
void	sort_hundred(long long int str);

void	little_packets(long long int i, long long int str)
{
	if (i == 1 && str < 1)
		ft_printnumb("0");
	else
		sort_hundred(str);
}
