# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 14:22:12 by rchampli          #+#    #+#              #
#    Updated: 2022/05/10 14:34:25 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = srcs/main.cpp\
		srcs/annuaire.cpp\
		srcs/contact.cpp

CC = g++

FLAG = -Werror -Wall -Wextra -std=c++98

INCLUDES = include/annuaire.hpp include/contact.hpp

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