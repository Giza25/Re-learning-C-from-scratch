#include <iostream>

#include "Log.h"

int main()
{
	int a = 1;
	bool comparisonResult = a == 0;
	if (comparisonResult)
	{
		Log("True");
	}
	else if (a == 1)
	{
		Log("Still true!");
	}
	else
	{
		Log("False");
	}
	std::cin.get();
}