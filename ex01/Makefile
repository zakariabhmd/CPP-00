NAME = phonebook
CC = c++
C++FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp contact.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(C++FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all