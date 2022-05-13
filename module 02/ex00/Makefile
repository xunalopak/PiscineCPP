# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 02:43:58 by rchampli          #+#    #+#              #
#    Updated: 2022/05/13 00:51:16 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = canon

SRC = main.cpp Fixed.cpp

CC = g++

FLAG = -Werror -Wall -Wextra -O2 -std=c++98

INCLUDES = Fixed.hpp

OBJS	= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS) $(INCLUDES)
			@$(CC) $(FLAG) -o $(NAME) $(OBJS)
%.o: %.cpp $(INCLUDES)
	$(CC) $(FLAG) -c $< -o $@

clean:
			@rm -f $(OBJS)

fclean: clean
			@rm -f $(NAME)

re:	fclean all