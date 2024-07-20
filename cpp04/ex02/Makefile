SRC		=	./AAnimal.cpp ./Brain.cpp ./Cat.cpp ./Dog.cpp ./main.cpp ./WrongAnimal.cpp ./WrongCat.cpp 
OBJ		=	$(SRC:.cpp=.o)
NAME	=	brain

all: $(NAME)

$(NAME): $(OBJ)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp ./AAnimal.hpp ./Brain.hpp ./Cat.hpp ./Dog.hpp ./WrongAnimal.hpp ./WrongCat.hpp 
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean
