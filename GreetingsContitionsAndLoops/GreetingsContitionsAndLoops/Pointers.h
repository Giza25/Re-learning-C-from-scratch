#pragma once

#include "Log.h"


void IncrementByPointer(int* value) // Takes pointer of a variable in order to change data in the memory.
{
	(*value)++;
}

void IncrementByReference(int& value) // Creating a reference to a veriable, an alias, to acsess the data without having to search for a memory adress.
{
	value++;
}



void DefinePointerOnStack()
{
	int var = 9;
	int* ptr = &var;

	(*ptr)++; // Have to use dereference first.

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