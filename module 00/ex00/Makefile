# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 12:34:10 by rchampli          #+#    #+#              #
#    Updated: 2022/05/12 02:16:31 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

SRC = megaphone.cpp

CC = g++

FLAG = -Werror -Wall -Wextra -std=c++98

OBJS	= $(SRC:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS)
			@$(CC) $(FLAG) -o $(NAME) $(OBJS)
%.o: %.cpp $(INCLUDES)
	$(CC) $(FLAG) -c $< -o $@

clean:
			@rm -f $(OBJS)

fclean: clean
			@rm -f $(NAME)

re:	fclean all
		