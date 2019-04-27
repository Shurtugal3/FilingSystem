// FileSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "fileSys.h"
#include "PoemName.h"
#include <iostream>
#include <string>


/*
struct alllocationTable
{
	short int tableInfo[4096]; 
};
*/ 

int main(int argc, char* argv[])
{
	fileSys fileSystem; 

	std::cout << "Input command...\n"; 
	std::string command, newFilePath; 
	std::cin >> command; 

	if (command.compare("Write") == 0)
	{
		fileSystem.writeBlank(); 
	}
	if (command.compare("Read") == 0)
	{
		std::cout << "Input file path...\n"; 
		std::cin >> newFilePath;
		fileSystem.readInFile(newFilePath); 

	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
