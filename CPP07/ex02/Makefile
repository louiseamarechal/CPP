# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 15:16:35 by lmarecha          #+#    #+#              #
#    Updated: 2022/11/02 12:26:26 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp

HEADERS =	Array.hpp Array.tpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CXX) $(OBJ) -o $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re
