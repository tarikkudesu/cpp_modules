#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

typedef struct s_Data
{
	int	data1 = 0;
	int	data2 = 0;
	int	data3 = 0;
	int	data4 = 0;
}	Data;

class Serializer
{
	private :
		Serializer();

	public:
		Serializer( const Serializer &copy );
		Serializer	&operator=( const Serializer &assign );
		~Serializer();

		static uintptr_t	serialize( Data *ptr );
		static Data		*deserialize( uintptr_t raw );
};

#endif
