#include <iostream>

#include "Log.h"
#include "Pointers.h"

int main()
{
	int a = 0;

	for (int i = 0; true; i++, a++)
	{
		Log(i);

		bool comparisonResult = a == 4;

		if (i == 5)
		{
			Log("End of a loop!");
			break;
		}

		if (comparisonResult)
		{
			Log("True");
		}
		else if (a == 1 || a == 3)
		{
			Log("Also true!");
			continue;
		}
		else
		{
			Log("False");
		}
		Log("To the next iteration!");
		
	}

	Log("===============================");
	Log("===============================");

	DefinePointerOnStack();
	Log("===============================");
	DefinePointerOnHeap();
	Log("===============================");
	DefineReference();

	std::cin.get();
}