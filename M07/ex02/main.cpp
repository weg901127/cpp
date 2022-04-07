//
// Created by Giyoung Lee on 3/28/22.
//
#include "Array.tpp"

int main(){
	{
		std::cout << "index test 1 =========================" << std::endl;
		Array<float> *f = new Array<float>(100);
		try {
			for (int i = 0; i < 100; i++) {
				(*f)[i] = 3;
			}
			std::cout << *f << std::endl;
		}catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		delete f;
	}
	{
		std::cout << "index test 2 =========================" << std::endl;
		Array<float> *f = new Array<float>(100);
		try {
			for (int i = 0; i < 101; i++) {
				(*f)[i] = 3;
			}
			std::cout << *f << std::endl;
		}catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		delete f;
	}
	{
		std::cout << "index test 3 =========================" << std::endl;
		Array<float> *f = new Array<float>(100);
		try {
				(*f)[-100] = -3;
			std::cout << *f << std::endl;
		}catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		delete f;
	}
	return 0;
}
