/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquintar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:15:20 by lquintar          #+#    #+#             */
/*   Updated: 2023/10/08 17:58:27 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	long long int	i;
	long long int	j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{	
			i = 0;
			j = 0;
			while (to_find[j] != 0)
			{
				if (str[j] != to_find[j])
				{
					i = 1;
				}
				j++;
			}
			if (i == 0 && str[j++] == 58)
				return (str);
		}
		str++;
	}
	return (0);
}
