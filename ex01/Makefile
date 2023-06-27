# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 17:41:49 by fmanzana          #+#    #+#              #
#    Updated: 2023/06/27 18:45:01 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	Zombie.cpp\
		zombieHorde.cpp\
		main.cpp

OBJS = $(addsuffix .o, $(notdir $(basename $(SRCS))))

all:	$(NAME)

$(OBJS):	$(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Horde compiled!"

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:			fclean all

.PHONY: all, clean, fclean, all
