# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 11:43:35 by thlefebv          #+#    #+#              #
#    Updated: 2024/10/24 11:45:42 by thlefebv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Convert

CC= c++

CPPFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main.cpp\
     Converter.cpp\

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