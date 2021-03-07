#include "Primes.h"

bool isPrime(int number)
{
	if (number <= 1) return false;
	else if (number == 2) return true;
	else if (number % 2 == 0) return false;
	else
	{
		int divisor = 3;
		while (divisor < number / divisor)
		{
			if (number % divisor == 0) return false;
			divisor += 2;
		}
		return true;
	}
}

bool isPrime(long long number)
{
	if (number <= 1) return false;
	else if (number == 2) return true;
	else if (number % 2 == 0) return false;
	else
	{
		long long divisor = 3;
		while (divisor < number / divisor)
		{
			if (number % divisor == 0) return false;
			divisor += 2;
		}
		return true;
	}
}
