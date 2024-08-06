SRC		=	./Bureaucrat.cpp ./Form.cpp ./main.cpp 
OBJ		=	$(SRC:.cpp=.o)
NAME	=	Bureaucrat

all: $(NAME)

$(NAME): $(OBJ)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp ./Bureaucrat.hpp ./Form.hpp 
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean
