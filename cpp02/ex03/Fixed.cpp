#include "Point.hpp"

const int Fixed::__fracBits = 8;

Fixed::Fixed() : __fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value ) : __fixedPointValue(value << __fracBits) {
	std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : __fixedPointValue(roundf(value * (1 << __fracBits))) {
	std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src ) {
	std::cout << "Copy constructor called" << std::endl;
	// this->setRawBits(src.getRawBits());
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


Fixed	&Fixed::operator=( Fixed const &rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->__fixedPointValue = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>( Fixed const &rhs ) const {
	return this->toFloat() > rhs.toFloat() ? true : false;
}

bool	Fixed::operator<( Fixed const &rhs ) const {
	return this->toFloat() < rhs.toFloat() ? true : false;
}

bool	Fixed::operator>=( Fixed const &rhs ) const {
	return this->toFloat() >= rhs.toFloat() ? true : false;
}

bool	Fixed::operator<=( Fixed const &rhs ) const {
	return this->toFloat() <= rhs.toFloat() ? true : false;
}

bool	Fixed::operator==( Fixed const &rhs ) const {
	return this->toFloat() == rhs.toFloat() ? true : false;
}

bool	Fixed::operator!=( Fixed const &rhs ) const {
	return this->toFloat() != rhs.toFloat() ? true : false;
}

Fixed	Fixed::operator+( Fixed const &rhs ) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-( Fixed const &rhs ) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*( Fixed const &rhs ) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/( Fixed const &rhs ) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}


Fixed	&Fixed::operator++() {
	++this->__fixedPointValue;
	return *this;
}

Fixed	&Fixed::operator--() {
	this->__fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	tmp = *this;
	this->__fixedPointValue++;
	return tmp;
}

Fixed	Fixed::operator--( int ) {
	Fixed	tmp = *this;
	this->__fixedPointValue--;
	return tmp;
}


int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->__fixedPointValue;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->__fixedPointValue = raw;
}

float	Fixed::toFloat( void ) const {
	return static_cast<float>(this->__fixedPointValue) / (1 << __fracBits);
}

int		Fixed::toInt( void ) const {
	return this->__fixedPointValue / (1 << __fracBits);
}

std::ostream &operator<<( std::ostream &o, Fixed const &rhs ) {
	o << rhs.toFloat();
	return o;
}

Fixed	&Fixed::min( Fixed &pt1, Fixed &pt2 ) {
	return pt1 < pt2 ? pt1 : pt2;	
}

const Fixed	&Fixed::min( Fixed const &pt1, Fixed const &pt2 ) {
	if (pt1.toFloat() < pt2.toFloat())
		return pt1;
	return pt2;
}

Fixed	&Fixed::max( Fixed &pt1, Fixed &pt2 ) {
	return pt1 > pt2 ? pt1 : pt2;	
}

const Fixed	&Fixed::max( Fixed const &pt1, Fixed const &pt2 ) {
	if (pt1.toFloat() < pt2.toFloat())
		return pt2;
	return pt1;
}
