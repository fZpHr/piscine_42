/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:42:22 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/05 15:29:26 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		l;
	int		i;

	i = 0;
	l = ft_strlen(src);
	dest = malloc(sizeof(char) * l + 1);
	if (dest == NULL)
		return (NULL);
	if (dest == 0)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int						i;
	struct s_stock_str		*test;

	i = 0;
	test = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (test == NULL)
		return (NULL);
	while (i < ac)
	{
		test[i].size = ft_strlen(av[i]);
		test[i].str = av[i];
		test[i].copy = ft_strdup(av[i]);
		i++;
	}
	test[i].str = 0;
	return (test);
}
