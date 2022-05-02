# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 14:22:12 by rchampli          #+#    #+#              #
#    Updated: 2022/05/02 14:25:30 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = 

CC = g++

FLAG = -Werror -Wall -Wextra -std=c++98

INCLUDES = include/

OBJS	= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS)
			@$(CC) -o $(NAME) $(OBJS)

clean:
			@rm -f $(OBJS)

fclean: clean
			@rm -f $(NAME)

re:	fclean all