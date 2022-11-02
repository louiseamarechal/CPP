# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 15:16:35 by lmarecha          #+#    #+#              #
#    Updated: 2022/11/02 14:03:01 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

ifeq ($(DEBUG), 1)
	CXXFLAGS += -g
endif

SRC =	main.cpp

HEADERS =	Iter.hpp 

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
