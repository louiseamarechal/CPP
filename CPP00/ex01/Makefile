# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 11:15:12 by lmarecha          #+#    #+#              #
#    Updated: 2022/08/12 12:24:48 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		phonebook

CC =		clang++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC =		main.cpp \
			PhoneBook.class.cpp \
			PhoneBook.utils.cpp \
			Contact.class.cpp

HEADER =	PhoneBook.class.hpp \
			Contact.class.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re
