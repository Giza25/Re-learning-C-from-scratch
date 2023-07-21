#include <iostream>

void Log(const char* message);
int Multiply(int a, int b);


int main()
{
	Log("Hello World!");
	std::cout << Multiply(7, 8) << std::endl;
	std::cin.get();
}
