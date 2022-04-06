//
// Created by Giyoung Lee on 3/28/22.
//
#include "Array.tpp"

int main(){
	{
		Array<int> a(10);
		Array<int> b;
		b = a;
		std::cout << b << std::endl;
	}
	return 0;
}
