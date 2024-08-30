#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <algorithm>
# include <sstream>
# include <stack>

# define RED "\e[31m"
# define NON "\e[0m"

# define READ_ERR		"I/O error while reading"

enum	e_token {
	ADDI = '+',
	SUBS = '-',
	MULT = '*',
	DIVI = '/'
};

class RPN
{
	private :
		std::stack< long long int >		__stack;
		const std::string		__rpn;

		RPN();
		RPN( std::string const &input );
		RPN( const RPN &copy );
		RPN	&operator=( const RPN &assign );
		~RPN();

		bool	isOperator( char op );
		void	operation( char op );
		void	calculate( void );

	public:
		static void	calculate( std::string const &input );
};

#endif
