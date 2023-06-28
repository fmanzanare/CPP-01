# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 19:29:32 by fmanzana          #+#    #+#              #
#    Updated: 2023/06/28 19:26:46 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFALGS) $(OBJS) -o $(NAME)
	@echo "Violence compiled!"

%.o:	%.cpp
	@$(CC) $(CFALGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:			fclean all

.PHONY: all clean fclean re
