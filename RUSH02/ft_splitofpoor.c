/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitofpoor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:54:55 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/08 17:42:15 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_splitofpoor(char *src, char *find, char *findbis)
{
	long int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] == *find) || (src[i] == *findbis
				&& ((src[i + 1] == *find) || (src[i + 1] == *findbis))))
		{
			src[i] = '\0';
			return (src);
		}
		i++;
	}
	src[i] = '\0';
	return (src);
}
