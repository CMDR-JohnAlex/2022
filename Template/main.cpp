// https://adventofcode.com/2022/day/1
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream inputFileRead("input.txt");             // Open "input.txt"
	std::string inputFileContent;                         // Current line's content
	
	while (std::getline(inputFileRead, inputFileContent)) // This should read every line in inputFileRead and save it to inputFileContent
	{
	}

	std::cout << "2022D1P1: " << "answer";                // Display answer
	inputFileRead.close();                                // Close "input.txt" (Not actually needed)
}