#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"

class Serializer
{
	private :
		Serializer();

	public:
		Serializer( const Serializer &copy );
		Serializer	&operator=( const Serializer &assign );
		~Serializer();

		static uintptr_t	serialize( Data *ptr );
		static Data			*deserialize( uintptr_t raw );
};

#endif
