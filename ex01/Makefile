NAME = phonebook
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp contact.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all