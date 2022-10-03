# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 15:16:35 by lmarecha          #+#    #+#              #
#    Updated: 2022/10/03 11:42:28 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Dog.cpp

HEADERS = Dog.hpp Cat.hpp Animal.hpp WrongCat.hpp WrongAnimal.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re
