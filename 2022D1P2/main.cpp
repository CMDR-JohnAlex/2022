// https://adventofcode.com/2022/day/1
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ifstream inputFileRead("input.txt");             // Open "input.txt"
	std::string inputFileContent;                         // Current line's content
	std::vector<int> elfs;

	int elfCalories = 0;
	while (std::getline(inputFileRead, inputFileContent)) // This should read every line in inputFileRead and save it to inputFileContent
	{
		if (inputFileContent == "")
		{
			elfs.push_back(elfCalories);
			elfCalories = 0;
			continue;
		}

		elfCalories += std::stoi(inputFileContent); // stoi, string to int
	}
	
	int answer = 0;
	for (int i = 0; i < 3; i++) // 3 because we are looking for the top three
	{
		answer += *std::max_element(elfs.begin(), elfs.end());
		int index = std::distance(elfs.begin(), std::max_element(elfs.begin(), elfs.end()));
		elfs.erase(elfs.begin() + index);
	}

	std::cout << "2022D1P2: " << answer;                  // Display answer
	inputFileRead.close();                                // Close "input.txt" (Not actually needed)
}