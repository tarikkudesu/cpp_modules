#include <iostream>
#include <cmath>

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

DayTime::DayTime() {
	this->__hour = 0;
	this->__minute = 0;
	this->__second = 0;
	std::cout << "Default constructor is called" << std::endl;
}

DayTime::DayTime(int h, int m, int s) : __hour(h), __minute(m), __second(s) {
	std::cout << "Parametrized constructor is called" << std::endl;
}

DayTime::~DayTime() {
	std::cout << "Destructor is called" << std::endl;
}

void	DayTime::setTime(int h, int m, int s) {
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
	if (this != &other)
		this->__Im = other.__Im; this->__Re = other.__Re;
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
/*------------------------------------------------ main ---------------------------------------------------*/

int main() {
	std::cout << (1 << 5) << std::endl;
}
