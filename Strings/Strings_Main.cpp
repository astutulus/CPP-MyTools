#include <string>	// getline
#include <vector>	// std::vector
#include <fstream>	// std::ifstream
#include <iostream>

#include "Tokenise.h"

int main()
{
	std::ifstream MyReadFile("test_words.txt"); // input file stream
	std::string myLine;

	while (getline(MyReadFile, myLine))
	{
		std::vector<std::string> this_row = Tokenise(myLine);

		// Demonstrating words are complete, and not padded with spaces:-
		for (std::string goat : this_row)
		{
			std::cout << "_" << goat << "_\n";
		}
		std::cout << "--------------" << std::endl;
	}

	std::cout << "================================" << std::endl;

	std::vector<int> numerals = TokeniseIntegers("123 45 6 7 89");
	for (int i : numerals)
	{
		std::cout << "..." << i << "...\n";
	}
	std::cin.get();
}