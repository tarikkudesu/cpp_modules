#include "Serializer.hpp"

Serializer::Serializer() {

}

Serializer::Serializer( const Serializer &copy ) {
	(void) copy;
}

Serializer::~Serializer() {

}

Serializer	&Serializer::operator=( const Serializer &assign ) {
	(void) assign;
	return *this;
}

uintptr_t	Serializer::serialize( Data* ptr ) {

}

Data	*Serializer::deserialize( uintptr_t raw ) {

}

