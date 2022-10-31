# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 15:16:35 by lmarecha          #+#    #+#              #
#    Updated: 2022/10/31 16:19:51 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP

ifeq ($(DEBUG), 1)
	CXXFLAGS	+=	-g
endif

SRC =	main.cpp \
		DataType.cpp \
		PrintData.cpp

HEADERS =	Convert.hpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $^ -o $@

clean :
	/bin/rm -f $(OBJ)
	/bin/rm -f *.d

fclean : clean
	/bin/rm -f $(NAME)

-include ./*.d

%.o:%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re
