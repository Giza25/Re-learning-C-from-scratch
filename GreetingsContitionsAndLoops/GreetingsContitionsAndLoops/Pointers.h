#pragma once

#include "Log.h"

void IncrementByPointer(int* value)
{
	(*value)++;
}
void IncrementByReference(int& value)
{
	value++;
}

void DefinePointerOnStack()
{
	int var = 9;
	int* ptr = &var;
	(*ptr)++; // Have to use brackets to define order of operations for compiler.
	Log(*ptr);
}

void DefinePointerOnHeap()
{
	char* buff = new char[8];
	memset(buff, 0, sizeof(buff));	// memset sets all data to the value of the second argument.

	char** ptr = &buff; // Creating pointer to a pointer. It basically stores adress of a 'buff' variable and nothing more.

	Log((int)*ptr);

	delete[] buff;
}

void DefineReference()
{
	int a = 5;
	int& ref = a; // Basically creating an alias.
	ref = 2;
	IncrementByPointer(&a);
	Log(a);
	IncrementByReference(a);
	Log(a);
}