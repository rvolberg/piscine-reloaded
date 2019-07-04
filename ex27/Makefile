#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvolberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 11:05:44 by rvolberg          #+#    #+#              #
#    Updated: 2017/11/09 16:42:45 by rvolberg         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = ft_display_file.c

INCLUDE = header.h

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC) $(INCLUDE)
	gcc -o $(NAME) ft_display_file.o
clean:
	rm -f ft_display_file.o
fclean: clean
	rm -f $(NAME)
re: fclean all