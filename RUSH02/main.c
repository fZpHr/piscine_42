/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquintar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:21:38 by lquintar          #+#    #+#             */
/*   Updated: 2023/10/08 19:26:25 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

long long int		check_error(char *str);
void				sort_packets(long long int str);
long long int		ft_atoi(char *str);

int	main(int argc, char **av)
{
	if (argc == 2)
	{		
		if (check_error(av[1]) == 1)
			return (0);
		sort_packets(ft_atoi(av[1]));
		write(1, "\n", 1);
	}
	else
	{
		write(1, "Error", 6);
		return (0);
	}
}
