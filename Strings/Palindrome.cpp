#include <string>
#include <algorithm> // reverse

bool IsPalimByIndex(int n)
{
	std::string Letters = std::to_string(n);
	size_t Len = Letters.size();

	for (int i = 0; i < Len / 2; i++)
	{
		if (Letters[i] != Letters[Len - 1 - i])
		{
			return false;
		}
	}
	return true;
}

bool IsPalimByClassReverse(int n)
{
	std::string Letters = std::to_string(n);

	std::string Reverse = Letters;
	std::reverse(Reverse.begin(), Reverse.end());

	return Letters == Reverse;
}