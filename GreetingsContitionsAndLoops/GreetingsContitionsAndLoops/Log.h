#pragma once

#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}


void Log(int message)
{
	std::cout << message << std::endl;
}