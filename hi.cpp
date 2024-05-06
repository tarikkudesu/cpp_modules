# include <iostream>

class Test
{
	public :
		int x;
		int y;

		Test() {
			x = 8;
			y = 9;
			std::cout << "Created " << std::endl;
		}
		~Test() {
			std::cout << "Destroyed " << std::endl;
		}
		void print() {
			std::cout << x << ", " << y << std::endl;
		}
		static void	_displayTimestamp( void ) {
			std::time_t	current_time;
			std::tm		*formated_time;
			char		buff[16];

			current_time = std::time(nullptr);
			formated_time = std::localtime(&current_time);
			std::strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", formated_time);
			buff[15] = '\0';
			std::cout << "[" << buff << "]" << "\n";
		}
};

void f() {
	Test t;
	t.~Test();
}

int main() {
	Test::_displayTimestamp();
}