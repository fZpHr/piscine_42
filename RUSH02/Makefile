# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbelle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 11:02:56 by hbelle            #+#    #+#              #
#    Updated: 2023/10/10 17:26:38 by hbelle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

MY_SOURCES = check_error.c \
		ft_atoi.c \
		ft_putstr.c \
		ft_strstr.c \
		first_word.c \
		main.c \
		ft_printnumb.c \
		ft_splitofpoor.c \
		int_to_char.c \
		sort_packets.c \
		count_packets.c \
		sort_hundred.c \
		little_packets.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(MY_OBJECTS)
	cc -o $(NAME) $(MY_OBJECTS) $(FLAGS)

all : $(NAME)
	
RM = rm -f		

clean :
	$(RM) $(MY_OBJECTS)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all

all : all

libft.a : all 

