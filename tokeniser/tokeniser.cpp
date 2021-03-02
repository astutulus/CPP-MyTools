#include <string>	// getline
#include <vector>	// std::vector
#include <fstream>	// std::ifstream
#include <iostream>

#include "RWSplit.h"

int main()
{
	std::ifstream MyReadFile("test_words.txt"); // input file stream
	std::string myLine;

	while (getline(MyReadFile, myLine))
	{
		std::vector<std::string> this_row = RWSplit(myLine);

		// Demonstrating words are complete, and not padded with spaces:-
		for (std::string goat : this_row)
		{
			std::cout << "_" << goat << "_\n";
		}
		std::cout << "--------------" << std::endl;
	}
	std::cin.get();
}