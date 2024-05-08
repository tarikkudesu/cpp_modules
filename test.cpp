#include <iostream>

#ifndef D
# define D 0
#endif

class Rectangle {
	private :
		int	lenght;
		int	widght;
	public :
		void	set_parameters(int l, int w) {
			if (w <= 0)
				w = 0;
			if (l <= 0)
				l = 0;
			lenght = l;
			widght = w;
		}

		int		get_lenght() {return lenght;}
		int		get_widght() {return widght;}
		int		area() {return lenght * widght;}
		int		perimeter() {return 2 * (lenght + widght);}
};

void f() {system("leaks a.out");}

int	main() {
	if (D) {atexit(f);}
	Rectangle *p;
	p = new Rectangle;
	p->set_parameters(4, -5);
	std::cout << "lenght : " << p->get_lenght() << ", widght : " << p->get_widght() << std::endl;
	std::cout << "area : " << p->area() << ", perimeter : " << p->perimeter() << std::endl;
	delete p;
}
