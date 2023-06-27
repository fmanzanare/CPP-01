# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 16:43:59 by fmanzana          #+#    #+#              #
#    Updated: 2023/06/27 16:48:22 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\
		main.cpp\

OBJS = $(addsuffix .o, $(notdir $(basename $(SRCS))))

all:	$(NAME)

$(OBJS):	$(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Brainzzzz compiled!"

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:			fclean all

.PHONY: all, clean, fclean, re
