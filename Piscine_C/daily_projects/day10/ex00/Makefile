# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvlad <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 18:31:33 by nvlad             #+#    #+#              #
#    Updated: 2017/09/18 21:52:14 by nvlad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERS = includes

FLAGS = -c -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I./$(HEADERS) $(SRC)
	ar rc $(NAME) $(OFILES)

clean:
	/bin/rm -f $(OFILES)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
