//
// Created by Giyoung Lee on 3/28/22.
//
#include "Array.tpp"

int main(){
	{
		Array<float> *f = new Array<float>(100);
		for (int i = 0; i < 100; i++) {
			(*f)[i] = 3;
		}
		std::cout << *f << std::endl;
		delete f;
	}
	return 0;
}
