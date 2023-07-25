#include <iostream>

#include "Log.h"
#include "Math.h"


int main()
{
	Log("Hello World!");
	int a = 7;
	int b = 8;
	std::cout << Multiply(a, b) << std::endl;
	std::cin.get();
}
