#include "Primes.h"

bool IsPrime(int Number)
{
	if (Number <= 1) return false;
	if (Number == 2) return true;
	if (Number % 2 == 0) return false;

	for (int div = 3; div <= Number / div; div += 2)
	{
		if (Number % div == 0) return false;
	}
	return true;
}


bool IsPrime(long long Number)
{
	if (Number <= 1) return false;
	if (Number == 2) return true;
	if (Number % 2 == 0) return false;

	for (long long Div = 3; Div <= Number / Div; Div += 2)
	{
		if (Number % Div == 0) return false;
	}
	return true;
}


