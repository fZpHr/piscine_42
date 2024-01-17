/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_packets.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquintar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:32:24 by lquintar          #+#    #+#             */
/*   Updated: 2023/10/08 15:37:29 by lquintar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	count_packets(long long int count)
{
	long long int	i;

	i = 0;
	if (count == 0)
		return (1);
	while (count != 0)
	{
		count = count / 10;
		i++;
	}
	return (i);
}
