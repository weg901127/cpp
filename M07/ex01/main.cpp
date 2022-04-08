#include "template.hpp"
#include <iostream>
class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	{
		int tab[] = {0, 1, 2, 3,
		             4}; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
		Awesome tab2[5];

		iter(tab, 5, print);
		iter(tab2, 5, print);
		iter(tab, 5, call);
		iter(tab, 5, call2);
	}
	{
		int arr[3];
		for (int i = 0; i < 3; i++)
			arr[i] = 1000;
		iter(arr, 3, call);
	}
	{
		int arr[3];
		for (int i = 0; i < 3; i++)
			arr[i] = i;
		iter(arr, 3, call2);
	}
	{
		float arr[3];
		const int b = 3;
		float f = 0.0001f;
		for (int i = 0; i < 3; i++)
			arr[i] = f++;
		iter(arr, b, call);
	}
	/*
	{
		const std::string arr = "abc";
		iter(arr, 3, call);
	}
	 */
	{
		std::string arr[3];
		arr[0] = "abc";
		arr[1] = "def";
		arr[2] = "ghi";
		iter(arr, 3, call);
	}
return 0;
}