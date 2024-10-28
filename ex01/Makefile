# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thomas <thomas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 18:37:09 by thomas            #+#    #+#              #
#    Updated: 2024/10/28 19:19:24 by thomas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Serializer

CC= c++

CPPFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp\
     Serializer.cpp\

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all