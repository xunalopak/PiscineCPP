# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 12:50:59 by rchampli          #+#    #+#              #
#    Updated: 2022/06/07 20:29:50 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphe

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

CC = g++

FLAG = -Werror -Wall -Wextra -O2 -std=c++98

INCLUDES = Cat.hpp Dog.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp

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