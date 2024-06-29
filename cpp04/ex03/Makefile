SRC		=	./AMateria.cpp ./Character.cpp ./Cure.cpp ./Ice.cpp ./ICharacter.cpp ./IMateriaSource.cpp ./main.cpp ./MateriaSource.cpp
OBJ		=	$(SRC:.cpp=.o)
NAME	=	materia

all: $(NAME)

$(NAME): $(OBJ)
	@c++ -Wall -Wextra -Werror -g -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp AMateria.hpp Cure.hpp ICharacter.hpp Ice.hpp
	@c++ -Wall -Wextra -Werror -g -std=c++98 -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean
