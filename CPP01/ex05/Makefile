# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 16:48:15 by lmarecha          #+#    #+#              #
#    Updated: 2022/08/18 15:57:47 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp

HEADER = Harl.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

.PHONY: all clean fclean re
