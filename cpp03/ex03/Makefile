SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ		=	$(SRC:.cpp=.o)
NAME	=	DiamondTrap

all: $(NAME)

$(NAME): $(OBJ)
	@c++ -Wall -Wextra -Werror -Wshadow -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp
	@c++ -Wall -Wextra -Werror -Wshadow -std=c++98 -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean
