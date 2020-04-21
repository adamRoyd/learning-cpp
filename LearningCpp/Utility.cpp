#pragma once
#include <iostream>
using std::cout;
using std::endl;

#include "Utility.h"

bool IsPrime(int x) 
{
	bool prime = true;
	for (int i = 2; i <= x / i; i = i + 1) 
	{
		int factor = x / i;
		if (factor * i == x)
		{
			cout << "factor found: " << factor << endl;
			prime = false;
			break;
		}
	}
	return prime;
}

// & takes value by reference
// const stops the value from changing
// useful if you don't want to make a copy of a big object, for performance reasons
// and want to ensure that the object properties are not changed.
bool Is2MorePrime(int const& x)
{
	return IsPrime(x + 2);
}