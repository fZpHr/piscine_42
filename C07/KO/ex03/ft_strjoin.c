/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:19:59 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/04 16:06:43 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

char	*maloc_empty(char *str)
{
	str = malloc(sizeof(char));
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	loop(int l, char **strs, int size)
{
	int	j;
	int	i;

	i = 1;
	j = 0;
	while (j < size)
	{
		l = l + ft_strlen(strs[i]);
		i++;
		j++;
	}
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		l;

	str = 0;
	l = 0;
	i = 1;
	j = 0;
	if (size == 0)
		return (maloc_empty(str));
	l = loop(l, strs, size);
	str = (char *) malloc(sizeof(char) * (l = l + ft_strlen(sep) * size - 1));
	while (j < size - 1)
	{
		str = ft_strcat(str, strs[i]);
		str = ft_strcat(str, sep);
		i++;
		j++;
	}
	str = ft_strcat(str, strs[i]);
	return (str);
}
