#include <iostream>
#include "matrices.h"

int main()
{
	Matrices user;

	bool exit = false;
	int choice = 0;

	do
	{
		std::cout << "What would you like to do?" << std::endl;
		std::cout << "1. Set (or reset) the two 3x4 matrixes" << std::endl;
		std::cout << "2. Add the two matrixes together (must set first)" << std::endl;
		std::cout << "3. Subtract the two matrixes from each other (must set first)" << std::endl;
		std::cout << "4. Print one of the matrixes" << std::endl;
		std::cout << "5. Exit the program" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			user.setArrays();
			break;
		case 2:
			user.addArrays();
			break;
		case 3:
			user.subtractArrays();
			break;
		case 4:
			user.printArray();
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

	return 0;
}
