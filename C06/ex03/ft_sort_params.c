/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:48:30 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/01 19:13:35 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	rev(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i != ac)
	{
		j = i + 1;
		while (j != ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}	
			j++;
		}
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		rev(ac, av);
	}
	return (0);
}
