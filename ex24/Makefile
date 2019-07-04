#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvolberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 17:29:37 by rvolberg          #+#    #+#              #
#    Updated: 2017/11/08 18:17:56 by rvolberg         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c 

INCLUDES = includes/*.h

all: $(NAME)

$(NAME):
	gcc -c $(SRCS)
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib libft.a
clean:
		rm -rf ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean: clean
	rm -rf libft.a
re: fclean all

