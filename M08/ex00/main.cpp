#include <vector>
#include "easyfind.hpp"
int main() {
	{
		std::vector<int> v(30);
		v[29] = 1;
		for (int i = 0; i < 30; i++) {
			std::cout << v[i] << " ";
		}
		std::cout << std::endl;
		easyfind(v, 1) = 9;
		easyfind(v, 9);
		for (int i = 0; i < 30; i++) {
			std::cout << v[i] << " ";
		}
		std::cout << std::endl;
		try {
			easyfind(v, 100);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		const std::vector<int> v(30);
		for (int i = 0; i < 30; i++) {
			std::cout << v[i] << " ";
		}
		std::cout << std::endl;
		//easyfind(v, 1) = 9;
		for (int i = 0; i < 30; i++) {
			std::cout << v[i] << " ";
		}
		std::cout << std::endl;
		try {
			easyfind(v, 100);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			std::vector<float> v2(30);
			easyfind(v2, 1.1f);
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
return 0;
}