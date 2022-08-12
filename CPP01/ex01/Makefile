# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/12 14:08:45 by lmarecha          #+#    #+#              #
#    Updated: 2022/08/12 14:28:34 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re
