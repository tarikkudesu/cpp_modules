SRC		=	main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ		=	$(SRC:.cpp=.o)
NAME	=	animal

all: $(NAME)

$(NAME): $(OBJ)
	@c++ -Wall -Wextra -Werror -g -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp
	@c++ -Wall -Wextra -Werror -g -std=c++98 -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean
