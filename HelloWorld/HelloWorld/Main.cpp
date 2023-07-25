#include <iostream>

#include "Log.h"
#include "Math.h"


int main()
{
	const char* message = "Hello World!";
	Log(message);
	int a = 7;
	int b = 8;
	std::cout << Multiply(a, b) << std::endl;
	std::cin.get();
}
