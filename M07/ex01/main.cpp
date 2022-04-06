//
// Created by Giyoung Lee on 3/28/22.
//
#include <iostream>
#include "template.hpp"

int main(){
	{
		int arr[3];
		for (int i = 0; i < 3; i++)
			arr[i] = i;
		iter(arr, 3, call);
	}
	{
		float arr[3];
		float f = 0.0001f;
		for (int i = 0; i < 3; i++)
			arr[i] = f++;
		iter(arr, 3, call);
	}
	{
		std::string arr = "abc";
		iter(arr, 3, call);
	}
	{
		std::string arr[3];
		arr[0] = "abc";
		arr[1] = "def";
		arr[2] = "ghi";
		iter(arr, 3, call);
	}
	return 0;
}
