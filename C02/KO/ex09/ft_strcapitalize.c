/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:24:19 by hbelle            #+#    #+#             */
/*   Updated: 2023/09/25 16:52:03 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	charamini(int i, char *str)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	*str = charamini(i, str);
	if ((str[i] >= 32 && str[i] <= 126))
	{
		while (str[i] != '\0')
		{
			i++;
			if ((str[i] >= 32 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 64)
				|| (str[i] >= 91 && str[i] <= 96)
				|| (str[i] >= 123 && str[i] <= 126))
			{
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
				i--;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
		}
	}		
	return (str);
}
