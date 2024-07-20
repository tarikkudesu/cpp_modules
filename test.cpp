#include <iostream>
#include <cmath>

// python3 -m venv venv
// source venv/bin/activate
// python3 -m pip install pygame

class DayTime
{
	private :
		int	__hour;
		int	__minute;
		int	__second;
	
	public :
		DayTime();
		DayTime( int h, int m, int s );
		~DayTime();

		void	setTime( int h, int m, int s );
		int		getHour() const;
		int		getMinutes() const;
		int		getSeconds() const;
		int		asSeconds() const;
		void	Display() const;
		bool	operator<( const DayTime &t ) const;
		DayTime	&operator++();
};

DayTime::DayTime() : __hour(0), __minute(0), __second(0) {
	std::cout << "Default constructor is called" << std::endl;
}

DayTime::DayTime(int h, int m, int s) : __hour(h), __minute(m), __second(s) {
	std::cout << "Parametrized constructor is called" << std::endl;
}

DayTime::~DayTime() {
	std::cout << "Destructor is called" << std::endl;
}

void	DayTime::setTime( int h, int m, int s ) {
	this->__hour = h;
	this->__minute = m;
	this->__second = s;
}

int		DayTime::getHour() const {
	return this->__hour;
}

int		DayTime::getMinutes() const {
	return this->__minute;
}

int		DayTime::getSeconds() const {
	return this->__second;

}

int		DayTime::asSeconds() const {
	return 60 * 60 * this->__hour + 60 * this->__minute + this->__second;
}

void	DayTime::Display() const {
	std::cout << this->__hour << "H" << this->__minute << "M" << this->__second << "S" << std::endl;
}

bool	DayTime::operator<( const DayTime &t ) const {
	return this->asSeconds() < t.asSeconds();
}

DayTime	&DayTime::operator++() {
	this->__second++;
	return *this;
}

class Complex
{
	private :
		int __Re;
		int __Im;

	public :
		Complex();
		Complex( int Re, int Im );
		Complex( const Complex &other );
		~Complex();

		Complex	&operator=( const Complex &other );
		void	Display();
		Complex	operator++();
		Complex	operator--();
		Complex	operator++( int );
		Complex	operator--( int );
		Complex	operator+( Complex &a );
		Complex	operator-( Complex &a );
		Complex	operator*( Complex &a );
		Complex	operator+=( Complex &a );
		Complex	operator-=( Complex &a );
		bool	operator<( Complex &a );
		bool	operator>( Complex &a );
		bool	operator>=( Complex &a );
		bool	operator<=( Complex &a );
		bool	operator==( Complex &a );
		bool	operator!=( Complex &a );
};

Complex::Complex( int Re, int Im ) : __Re(Re), __Im(Im) {

	std::cout << "default constructor is called" << std::endl;
}

Complex::Complex() : __Re(0), __Im(0) {

}

Complex::Complex( const Complex &other ) {
	std::cout << "copy constructor is called" << std::endl;
	*this = other;
}

Complex::~Complex() {

}

void	Complex::Display() {
	std::cout << this->__Re << " i" << this->__Im << std::endl;
}

Complex	&Complex::operator=( const Complex &other ) {
	std::cout << "copy assignement is called" << std::endl;	
	if (this != &other) {
		this->__Im = other.__Im;
		this->__Re = other.__Re;
	}
	return *this;
}

Complex	Complex::operator++() {
	this->__Re++;
	return Complex(this->__Re, this->__Im);
}

Complex	Complex::operator++(int) {
	this->__Im++;
	return Complex(this->__Re, this->__Im);
}

Complex	Complex::operator--() {
	this->__Re--;
	return Complex(this->__Re, this->__Im);
}

Complex	Complex::operator--(int) {
	this->__Im--;
	return Complex(this->__Re, this->__Im);
}

Complex	Complex::operator+( Complex &a ) {
	return Complex(this->__Re + a.__Re, this->__Im + a.__Im);
}

Complex	Complex::operator-( Complex &a ) {
	return Complex(this->__Re - a.__Im, this->__Im - a.__Im);
}

Complex	Complex::operator*( Complex &a ) {
	return Complex(this->__Re * a.__Re + this->__Im * a.__Im, this->__Re * a.__Im + this->__Im * a.__Re);
}

bool	Complex::operator<( Complex &a ) {
	int	d1 = sqrt(std::pow(2, __Re) + std::pow(2, __Im));
	int d2 = sqrt(std::pow(2, a.__Re) + std::pow(2, a.__Im));
	return d1 < d2;
}

bool	Complex::operator>( Complex &a ) {
	int	d1 = sqrt(std::pow(2, __Re) + std::pow(2, __Im));
	int d2 = sqrt(std::pow(2, a.__Re) + std::pow(2, a.__Im));
	return d1 > d2;
}

bool	Complex::operator>=( Complex &a ) {
	int	d1 = sqrt(std::pow(2, __Re) + std::pow(2, __Im));
	int d2 = sqrt(std::pow(2, a.__Re) + std::pow(2, a.__Im));
	return d1 >= d2;
}

bool	Complex::operator<=( Complex &a ) {
	int	d1 = sqrt(std::pow(2, __Re) + std::pow(2, __Im));
	int d2 = sqrt(std::pow(2, a.__Re) + std::pow(2, a.__Im));
	return d1 <= d2;
}

bool	Complex::operator==( Complex &a ) {
	int	d1 = sqrt(std::pow(2, __Re) + std::pow(2, __Im));
	int d2 = sqrt(std::pow(2, a.__Re) + std::pow(2, a.__Im));
	return d1 == d2;
}

bool	Complex::operator!=( Complex &a ) {
	int	d1 = sqrt(std::pow(2, __Re) + std::pow(2, __Im));
	int d2 = sqrt(std::pow(2, a.__Re) + std::pow(2, a.__Im));
	return d1 != d2;
}

Complex	Complex::operator+=( Complex &a ) {
	this->__Re += a.__Re;
	this->__Im += a.__Im;
	return Complex(this->__Re, this->__Im);
}

Complex	Complex::operator-=( Complex &a ) {
	this->__Re -= a.__Re;
	this->__Im -= a.__Im;
	return Complex(this->__Re, this->__Im);
}
Complex f(Complex C) {
	return C;
}
/*-------------------------------------------- Inheritance ------------------------------------------------*/

class	Counter
{
	protected :
		unsigned int	__count;
	public :
		Counter();
		Counter( int const start );
		Counter( Counter const &src );
		~Counter();

		Counter			&operator=( const Counter &rhs );
		unsigned int	getValue( void ) const ;
		void			Display( void );
		Counter			operator++( void );
		Counter			operator--( void );
		bool			operator>( Counter &rhs );
		bool			operator<( Counter &rhs );
		bool			operator==( Counter &rhs );
		bool			operator!=( Counter &rhs );
		bool			operator<=( Counter &rhs );
		bool			operator>=( Counter &rhs );
		bool			operator>( const unsigned int i );
		bool			operator<( const unsigned int i );
		bool			operator==( const unsigned int i );
		bool			operator!=( const unsigned int i );
		bool			operator<=( const unsigned int i );
		bool			operator>=( const unsigned int i );
};

Counter::Counter() : __count(0) {

}

Counter::Counter( int const start ) : __count(start) {

}

Counter::Counter( const Counter &src ) : __count(src.__count) {

}

Counter::~Counter() {

}

Counter			&Counter::operator=( Counter const &rhs ) {
	if (this != &rhs)
		this->__count = rhs.__count;
	return *this;
}

void	Counter::Display( void ) {
	std::cout << this->__count;
}

unsigned int	Counter::getValue( void ) const  {
	return this->__count;
}

bool	Counter::operator>( Counter &rhs ) {
	return this->__count > rhs.getValue() ? true : false;
}

bool	Counter::operator<( Counter &rhs ) {
	return this->__count < rhs.getValue() ? true : false;
}

bool	Counter::operator==( Counter &rhs ) {
	return this->__count == rhs.getValue() ? true : false;
}

bool	Counter::operator!=( Counter &rhs ) {
	return this->__count != rhs.getValue() ? true : false;
}

bool	Counter::operator<=( Counter &rhs ) {
	return this->__count <= rhs.getValue() ? true : false;
}

bool	Counter::operator>=( Counter &rhs ) {
	return this->__count >= rhs.getValue() ? true : false;
}

bool	Counter::operator>( const unsigned int i ) {
	return this->__count > i ? true : false;
}
bool	Counter::operator<( const unsigned int i ) {
	return this->__count < i ? true : false;
}
bool	Counter::operator==( const unsigned int i ) {
	return this->__count == i ? true : false;
}
bool	Counter::operator!=( const unsigned int i ) {
	return this->__count != i ? true : false;
}
bool	Counter::operator<=( const unsigned int i ) {
	return this->__count <= i ? true : false;
}
bool	Counter::operator>=( const unsigned int i ) {
	return this->__count >= i ? true : false;
}

Counter	Counter::operator++( void ) {
	return Counter(++__count);
}

Counter	Counter::operator--( void ) {
	return Counter(--__count);
}

class	CounterD : public Counter
{
	public :
		Counter	operator++( int );
		Counter	operator--( int );
};

Counter	CounterD::operator++( int ) {
	return Counter(__count++);
}

Counter	CounterD::operator--( int ) {
	return Counter(__count--);
}

/*------------------------------------------------ main ---------------------------------------------------*/


class Distance
{
	private :
		int		__feet;
		float	__inches;

	public :
		class	InchesException;

		Distance();
		Distance( int feet, float inches );
		void	getDistance( void );
		void	printDistance( void );

};

class	Distance::InchesException
{
	public :
		std::string	__origin;
		float		__ivalue;

		InchesException( std::string origin, float ivalue ) : __origin(origin), __ivalue(ivalue) {

		}

};

Distance::Distance() : __feet(0), __inches(0.f) {

}

Distance::Distance( int feet, float inches ) : __feet(feet), __inches(inches) {
	if (inches >= 12.f)
		throw InchesException( "2-arg constructor", inches);
}

void	Distance::getDistance( void ) {
	std::cout << "Enter feet : "; std::cin >> this->__feet;
	std::cout << "Enter inches : "; std::cin >> this->__inches;
	if (this->__inches >= 12.f)
		throw InchesException( "get Distance method", this->__inches );
}

void	Distance::printDistance( void ) {
	std::cout << __feet << "-" << __inches << std::endl;
}


int main() {
	try {
		Distance	dist1( 5, 2.f );
		Distance	dist2;

		dist1.printDistance();
		dist2.getDistance();

	} catch ( Distance::InchesException &e ) {
		std::cout << "initialization error in : " << e.__origin \
			<< "\ninches value of : " << e.__ivalue << " is too large";
	}
	std::cout << std::endl;
}
