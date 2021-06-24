#pragma once
#include <iostream>

class Printer {
public :
	static void print(int *array, int size)
	{
		for (int k = 0; k < size; k++)
			std::cout << array[k] << " ";

		std::cout << "\n";
	}
};