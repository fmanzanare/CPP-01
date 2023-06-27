# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 18:55:49 by fmanzana          #+#    #+#              #
#    Updated: 2023/06/27 19:00:38 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_this_is_bain

CC = c++

CFALGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJS = $(addsuffix .o, $(notdir $(basename $(SRC))))

all:	$(NAME)

$(OBJS):	$(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

$(NAME):	$(OBJS)
	@$(CC) $(CFALGS) $(OBJS) -o $(NAME)
	@echo "HI THIS IS BRAIN compiled!"

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:			fclean all

.PHONY = all, clean, fclean, re
