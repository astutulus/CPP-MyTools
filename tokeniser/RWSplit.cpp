#include <vector>
#include <string>
#include "RWSplit.h"

std::vector<std::string> RWSplit(std::string input)
{
	std::vector<std::string> this_row;
	int indexWordStart = 0;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == ' ')
		{
			std::string word = input.substr(indexWordStart, i - indexWordStart);
			this_row.push_back(word);
			indexWordStart = i + 1;
		}
		else if (i == input.size() - 1)
		{
			std::string word = input.substr(indexWordStart, i - indexWordStart + 1);
			this_row.push_back(word);
		}
	}
	return this_row;
}

