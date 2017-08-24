# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caroua <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 10:24:22 by caroua            #+#    #+#              #
#    Updated: 2017/08/22 11:45:51 by caroua           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRC =	ft_nbr.c \
		ft_ultimate_do_op.c \
		ft_error.c \
		ft_operation.c \
		ft_putchar_nbr_str.c

all:  $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
