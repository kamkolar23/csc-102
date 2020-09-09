#include "matrices.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

void Matrices::setArrays()
{
	srand((unsigned int)time(nullptr));

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			firstArray[i][j] = rand() % 20 + 1;
			secondArray[i][j] = rand() % 20 + 1;
		}
	}
}

void Matrices::printArray() const
{
	bool exit = false;
	int choice = 0;
	
	do
	{
		std::cout << "Which array would you like to print? " << std::endl;
		std::cout << "1. The first 3x4 matrix" << std::endl;
		std::cout << "2. The second 3x4 matrix" << std::endl;
		std::cout << "3. The matrixes added together" << std::endl;
		std::cout << "4. The matrixes subtracted from one another" << std::endl;
		std::cout << "5. Return to main menu" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "First 3x4 Matrix: " << std::endl << std::endl;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					std::cout << firstArray[i][j] << " ";
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "Second 3x4 Matrix: " << std::endl << std::endl;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					std::cout << secondArray[i][j] << " ";
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
			break;
		case 3:
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					std::cout << addedArray[i][j] << " ";
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
			break;
		case 4:
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					std::cout << subtractedArray[i][j] << " ";
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;
			break;
		case 5:
			exit = true;
			break;
		default:
			if (std::cin.fail())
			{
				std::cout << "Entered incompatible answer." << std::endl;
				std::cout << "Please enter a number between 1 and 5: " << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << std::endl;
				break;
			}
			std::cout << "Entered number out of range." << std::endl;
			std::cout << "Please enter a number between 1 and 5: " << std::endl << std::endl;
			break;
		}
	} while (!exit);
}

void Matrices::addArrays()
{
	std::cout << "Arrays Added Together: " << std::endl << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			addedArray[i][j] = firstArray[i][j] + secondArray[i][j];
		}
	}
}

void Matrices::subtractArrays()
{
	std::cout << "Arrays Subtracted from Each Other: " << std::endl << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			subtractedArray[i][j] = firstArray[i][j] - secondArray[i][j];
		}
	}
}
