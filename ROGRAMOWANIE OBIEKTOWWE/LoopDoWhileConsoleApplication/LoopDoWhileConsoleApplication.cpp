// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//Napisz program który wylosuje liczbê a nastêpnie urztykownik bêdzi musia³ j¹ zgadn¹æ 
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

void task2()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand() % 101 ;

	int numberFromUser;
	/*
	std::cout << "Podaj liczbe ";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "POdaj liczbê ";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			//...
		}
		*/
	do
	{
		std::cout << "Podaj liczbe ";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za duza liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za ma³a  liczba\n";
	} while (numberFromUser != randomNumber);
			std::cout << " Gratulacje!!!\n ";
		
	
}

int main()
{
	//task1();
	task2();
}




