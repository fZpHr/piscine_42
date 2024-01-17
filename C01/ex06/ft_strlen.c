/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:25:58 by hbelle            #+#    #+#             */
/*   Updated: 2023/09/22 19:29:09 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
