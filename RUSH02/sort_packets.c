/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_packets.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorlac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:40:50 by adorlac           #+#    #+#             */
/*   Updated: 2023/10/08 17:43:40 by adorlac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void				ft_printnumb(char *av);
char				*int_to_char(long long int nbr);
long long int		count_packets(long long int count);
void				sort_hundred(long long int str);
void				little_packets(long long int i, long long int str);

void	divide_billion(long long int j, long long int tmp, long long int str)
{
	while (j > 0)
	{
		tmp = tmp / 10;
		j--;
	}
	sort_hundred(tmp);
	write (1, " ", 1);
	ft_printnumb("1000000000");
	write (1, " ", 1);
	tmp = str % 1000000000;
	j = 6;
	while (j > 0)
	{
		tmp = tmp / 10;
		j--;
	}
	if (tmp != 000)
		sort_hundred(tmp);
	if (tmp != 000)
	{
		write (1, " ", 1);
		ft_printnumb("1000000");
		write (1, " ", 1);
	}
}

void	divide_billion2(long long int j, long long int tmp, long long int str)
{
	while (j > 0)
	{
		tmp = tmp / 10;
		j--;
	}
	if (tmp != 000)
		sort_hundred(tmp);
	if (tmp != 000)
	{
		write (1, " ", 1);
		ft_printnumb("1000");
		write (1, " ", 1);
	}
	tmp = str % 1000;
	if (tmp != 000)
		sort_hundred(tmp);
}

void	divide_million(long long int j, long long int tmp, long long int str)
{
	while (j > 0)
	{
		tmp = tmp / 10;
		j--;
	}
	sort_hundred(tmp);
	write (1, " ", 1);
	ft_printnumb("1000000");
	write (1, " ", 1);
	tmp = str % 1000000;
	j = 3;
	while (j > 0)
	{
		tmp = tmp / 10;
		j--;
	}
	if (tmp != 000)
		sort_hundred(tmp);
	if (tmp != 000)
	{
		write (1, " ", 1);
		ft_printnumb("1000");
		write (1, " ", 1);
	}
}

void	divide_thousand(long long int j, long long int tmp, long long int str)
{
	while (j > 0)
	{
		tmp = tmp / 10;
		j--;
	}
	sort_hundred(tmp);
	write (1, " ", 1);
	ft_printnumb("1000");
	write (1, " ", 1);
	tmp = str % 1000;
	if (tmp != 000)
		sort_hundred(tmp);
}

void	sort_packets(long long int str)
{
	long long int	i;
	long long int	tmp;
	long long int	count;

	tmp = str;
	count = str;
	i = (count_packets(str));
	if (i <= 12 && i >= 10)
	{
		divide_billion(9, tmp, str);
		tmp = str % 1000000;
		divide_billion2(3, tmp, str);
	}
	if (i <= 9 && i >= 7)
	{
		divide_million(6, tmp, str);
		tmp = str % 1000;
		if (tmp != 000)
			sort_hundred(tmp);
	}
	if (i <= 6 && i >= 4)
		divide_thousand(3, tmp, str);
	if (i <= 3)
		little_packets(i, str);
}
