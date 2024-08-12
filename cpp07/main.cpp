#include <iostream>

template <class T>
T    abs( T &n ) {
    return (n < 0) ? -n : n;
}

int main( void ) {
 int * a = new int(); 
 std::cout << *a;
}
