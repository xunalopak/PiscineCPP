# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 02:43:58 by rchampli          #+#    #+#              #
#    Updated: 2022/05/13 02:47:12 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = speak

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