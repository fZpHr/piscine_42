/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:32:34 by hbelle            #+#    #+#             */
/*   Updated: 2023/09/29 19:48:28 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	number;
	int	i;

	i = 0;
	minus = 0;
	number = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{	
		if (*str == '-')
			minus++;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		number = number * 10 + str[i] - 48;
		str++;
	}
	if (minus % 2 == 1)
		return (number * -1);
	return (number);
}
