SRC		=	./AForm.cpp ./Bureaucrat.cpp ./Intern.cpp ./main.cpp ./PresidentialPardonForm.cpp ./RobotomyRequestForm.cpp ./ShrubberyCreationForm.cpp 
OBJ		=	$(SRC:.cpp=.o)
NAME	=	Bureaucrat

all: $(NAME)

$(NAME): $(OBJ)
	@c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp ./AForm.hpp ./Bureaucrat.hpp ./Intern.hpp ./PresidentialPardonForm.hpp ./RobotomyRequestForm.hpp ./ShrubberyCreationForm.hpp 
	@c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean
