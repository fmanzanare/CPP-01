# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/29 15:54:47 by fmanzana          #+#    #+#              #
#    Updated: 2023/06/29 15:57:53 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	Harl.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Harl compiled!"

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)
	@echo "Everything cleaned!"

re:		fclean all

.PHONY: all clean fclean re
