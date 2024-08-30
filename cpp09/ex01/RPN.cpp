#include "RPN.hpp"

RPN::RPN() {
	throw std::runtime_error( "Error: no input" );
}

RPN::RPN( std::string const &input ) : __rpn( input ) {
	for (size_t i = 0; i < __rpn.length(); i++) {
		if (!std::isdigit(__rpn.at(i)) && __rpn.at(i) != ' ' \
			&& __rpn.at(i) != ADDI && __rpn.at(i) != SUBS \
			&& __rpn.at(i) != MULT && __rpn.at(i) != DIVI)
				throw std::runtime_error( "Error: invalid input" );
	}
}

RPN::RPN( const RPN &copy ) : __stack( copy.__stack ) {

}

RPN::~RPN() {

}

RPN	&RPN::operator=( const RPN &assign ) {
	if (this != &assign)
		this->__stack = assign.__stack;
	return *this;
}

bool	RPN::isOperator( char op ) {
	return op == '*' || op == '+' || op == '-' || op == '/';
}

void	RPN::operation( char op ) {
	if (__stack.size() <= 1)
		throw std::runtime_error( "Error: invalid input" );
	int	second = __stack.top();
	__stack.pop();
	int	first = __stack.top();
	__stack.pop();
	switch (op) {
		case ADDI:
			this->__stack.push( first + second );
			break ;
		case SUBS:
			this->__stack.push( first - second );
			break ;
		case MULT:
			this->__stack.push( first * second );
			break ;
		case DIVI:
			second ? true : throw std::runtime_error( "Error: division by 0" );
			this->__stack.push( first / second );
			break ;
	}
}

void	RPN::calculate( void ) {
	std::string			token;
	std::stringstream	ss(this->__rpn);

	while (true) {
		std::getline(ss, token, ' ');
		if (ss.fail() && token.length() == 0)
			break ;

		if (token.length() != 1)
			throw std::runtime_error( "Error: invalid input" );

		if ( isOperator( token.at(0) ))
			operation( token.at(0) );
		else
			__stack.push( token.at(0) - '0' );

		token.clear();
	}
	if (__stack.size() != 1)
		throw std::runtime_error( "Error: invalid input" );
	std::cout << __stack.top() << std::endl;
}

void	RPN::calculate( std::string const &input ) {
	try {
		RPN	rpn( input );

		rpn.calculate();
	} catch ( std::exception &e ) {
		std::cout << RED << e.what() << NON << std::endl;
	}
}
