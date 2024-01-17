/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorlac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:10:53 by adorlac           #+#    #+#             */
/*   Updated: 2023/10/08 19:25:46 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*int_to_char(long long int nbr);

long long int	ft_size(long long int str)
{
	long long int	i;

	i = 0;
	while (str != 0)
	{
		str /= 10;
		i++;
	}
	return (i);
}

char	*ft_writer(long long int nbr, char *str, long long int i)
{
	while (nbr != 0)
	{
		str[i] = '0' + (nbr % 10);
		nbr /= 10;
		i--;
	}
	return (str);
}

char	*int_to_char(long long int nbr)
{
	long long int		tmp;
	long long int		i;
	long long int		length;
	char				*str;
	char				*tmpm;

	tmp = nbr;
	length = ft_size(nbr);
	if (nbr == 0)
		length = 1;
	str = (char *)malloc((length +1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	tmpm = str;
	free(str);
	i = length - 1;
	if (nbr == 0)
		str[0] = '0';
	else
		ft_writer(nbr, str, i);
	str[length] = '\0';
	return (tmpm);
}
