// LoopDoWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//Napisz program kt�ry wylosuje liczb� a nast�pnie urztykownik b�dzi musia� j� zgadn�� 
void task1()
{
	/*
	int number;
	std::cout << "Podaj liczb� dodatni� ";
	std::cin >> number;
	if (number < 0)
	{
		std::cout << "POdaj liczb� dodatni�";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "POdaj liczb� dodatni�";
			std::cin >> number;
			if (number < 0)
			{
				//....
			}
		}
*/

	int number;
	do {
		std::cout << "Podaj liczb� dodatni� ";
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
		std::cout << "POdaj liczb� ";
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
			std::cout << "Za ma�a  liczba\n";
	} while (numberFromUser != randomNumber);
			std::cout << " Gratulacje!!!\n ";
		
	
}

int main()
{
	//task1();
	task2();
}




