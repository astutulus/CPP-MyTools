#include <string>
#include <algorithm> // reverse
#include "Palindrome.h"

//
// Helper (not listed in header file)
//
bool IsPalinByIndex(std::string Letters)
{
	size_t Len = Letters.size();

	for (unsigned int i = 0; i < Len / 2; i++)
	{
		if (Letters[i] != Letters[Len - 1 - i])
		{
			return false;
		}
	}
	return true;
}

//
// Helper (not listed in header file)
//
bool IsPalinByReverseBIF(std::string text)
{
	std::string Reverse = text;
	std::reverse(Reverse.begin(), Reverse.end());

	return text == Reverse;
}

bool is_palindrome_with_begin(std::string text)
{
	return equal(
		text.begin(),
		text.begin() + text.size() / 2,
		text.rbegin());
}

// 
// Overloaded constructor: String version seen in header file
//
bool IsPalindrome(std::string str)
{
	// return IsPalinByIndex(str);
	// return IsPalinByReverseBIF(str);
	return is_palindrome_with_begin(str);
}

// 
// Overloaded constructor: Integer version seen in header file
//
bool IsPalindrome(int n)
{
	std::string Letters = std::to_string(n);
	return IsPalindrome(Letters);
}
