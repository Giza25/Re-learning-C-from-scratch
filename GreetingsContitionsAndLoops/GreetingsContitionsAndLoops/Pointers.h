#pragma once

#include "Log.h"

void DefinePointerOnStack()
{
	int var = 9;
	int* ptr = &var;
	(*ptr)++;
	Log(*ptr);
}

void DefinePointerOnHeap()
{
	char* buff = new char[8];
	memset(buff, 0, sizeof(buff));	

	char** ptr = &buff;

	delete[] buff;
}