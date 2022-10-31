# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 15:16:35 by lmarecha          #+#    #+#              #
#    Updated: 2022/10/31 11:34:38 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		DataType.cpp \
		PrintData.cpp

HEADERS =	Convert.hpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

# %.o:%.cpp $(HEADERS)
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re
