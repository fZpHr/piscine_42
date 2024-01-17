/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorlac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:42:31 by adorlac           #+#    #+#             */
/*   Updated: 2023/10/08 17:23:36 by lquintar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*int_to_char(long long int nbr);
void	ft_printnumb(char *av);

void	div_0(long long int tmp)
{
	ft_printnumb(int_to_char(tmp));
	write (1, " ", 1);
	ft_printnumb("100");
	write (1, " ", 1);
}

void	div_1(long long int tmp, long long int str)
{
	tmp = tmp * 10;
	ft_printnumb(int_to_char(tmp));
	if (str % 10 != 0)
		write(1, "-", 1);
}

void	div_2(long long int tmp, long long int str)
{
	tmp = str % 100;
	ft_printnumb(int_to_char(tmp));
}

void	sort_hundred(long long int str)
{
	long long int	tmp;
	long long int	i;

	tmp = str;
	i = 2;
	while (i > 0)
	{
		tmp = tmp / 10;
		i--;
	}
	if (tmp != 0)
		div_0(tmp);
	tmp = str % 100;
	tmp = tmp / 10;
	if ((tmp != 1) && (tmp != 0))
		div_1(tmp, str);
	if (tmp == 1)
		div_2(tmp, str);
	if (tmp != 1 && (str % 10) != 0)
	{
		tmp = str % 10;
		ft_printnumb(int_to_char(tmp));
	}
}
