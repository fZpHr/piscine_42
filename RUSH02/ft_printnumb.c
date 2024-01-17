/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:19:27 by hbelle            #+#    #+#             */
/*   Updated: 2023/10/08 17:00:39 by hbelle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> 
#include <unistd.h>
#include <stdlib.h>

char	*first_word(char *str);
char	*ft_strstr(char *str, char *to_find);
void	ft_putstr(char *str);
char	*ft_splitofpoor(char *src, char *find, char *finbis);

void	ft_printnumb(char *av)
{
	long long int		fd;
	char				buff[1000000];
	char				*path;
	char				*str;

	path = "numbers.dict";
	fd = open(path, O_RDONLY);
	read(fd, buff, 1000000);
	if (ft_strstr(buff, &av[0]) == 0)
	{
		write (1, "Dict Error", 12);
		return ;
	}
	else
	{
		str = ft_strstr(buff, &av[0]);
		str = first_word(str);
		str = ft_splitofpoor(str, "\n", " ");
		ft_putstr (str);
	}
}
