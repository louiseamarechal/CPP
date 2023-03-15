NAME = btc

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

ifeq ($(DEBUG), 1)
	CXXFLAGS += -g
endif

SRC =	main.cpp \
		BitcoinExchange.cpp

HEADERS =	BitcoinExchange.hpp

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
