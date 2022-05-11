# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 02:43:58 by rchampli          #+#    #+#              #
#    Updated: 2022/05/11 14:54:54 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC = main.cpp 

CC = g++

FLAG = -Werror -Wall -Wextra -O3 -std=c++98

INCLUDES =

OBJS	= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS) $(INCLUDES)
			@$(CC) -o $(NAME) $(OBJS)
%.o: %.cpp $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

clean:
			@rm -f $(OBJS)

fclean: clean
			@rm -f $(NAME)

re:	fclean all