// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	task1();
}


void task1()
{
	/*
	int number;
	std::cout << "Podaj liczbê dodatni¹ ";
	std::cin >> number;
	if (number < 0)
	{
		std::cout << "POdaj liczbê dodatni¹";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "POdaj liczbê dodatni¹";
			std::cin >> number;
			if (number < 0)
			{
				//....
			}
		}
*/

	int number;
	do {
		std::cout << "Podaj liczbê dodatni¹ ";
		std::cin >> number;
	} while (number < 0);
	std::cout << "POdajno liczbe" << number ;
	}





