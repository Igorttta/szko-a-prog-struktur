// LoopWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	int number;
	do
	{
		std::cout << "podaj liczb� dodatni�\n ";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigit = 1;
	/*
	if (number > 9)
	{
		number = number / 10;
		numberOfDigit++;
		if (number > 9)hg
		{
			number = number / 10;
			numberOfDigit++;
			if (number > 9)
			{

				//...

			}


		}
	 }
	 */
}

void task2()
{
	int a;
	std::cout << "POdaj  pierwsza liczb�";
	std::cin >> a;

	int b;
	std::cout << "POdaj  drug� liczb�";
	std::cin >> b;
	/*
	if (b != 0)
	{
		int tmpA = a;
		a = b;
		if (b != 0)
		{
			//..
		}
	}
	*/

	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
	std::cout << "NWD =" << a << "\n";
}
//Miasto T. ma obecnie 100 tys. mieszka�c�w, ale jego populacja ro�nie co roku o 3% rocznie. 
//Miasto B. ma 300 tys. mieszka�c�w i ta liczba ro�nie w tempie 2% na rok.
// Wykonaj symulacj� prezentuj�c� liczb� mieszka�c�w w obu miastach i zatrzymuj�c� si�, 
// gdy liczba mieszka�c�w miasta T. przekroczy liczb� z miasta B.
void task3()

{
	double cityT = 100000;
	double cityB = 300000;
	int year = 0;

	while (cityT > cityB) {
		cityT = cityT * 1.03;
		cityB = cityB * 1.02;
		year++;
	}
	std::cout << cityT;
	std::cout << cityB;
	std::cout << "Miasto T przebi�o w liczbie mieszka�c�w " << year << "latach";




}


void task4()
{
	int number;
	std::cout << "POdaj liczb� ";
	std::cin >> number;
	int tmpNumber = number;
	int reverseNumber = 0;
	while (tmpNumber > 0)
	{
		int rest = tmpNumber % 10;
		reverseNumber = reverseNumber * 10 + rest;
		tmpNumber = tmpNumber / 10;
	}
	if (number == reverseNumber)
	{
		std::cout << "Liczba jest palindromem";
	}
	else
	{

		std::cout << "LIcbza nie jest palindromem";
	}
}
void task5()
{

	int number;
	std::cout << "POdaj liczb� ";
	std::cin >> number;

	int number1 = 0;
	while (number != number1)
	{
		std::cout << "Hello word \n";
		number1++;
	}



}
int main()
{
	task5();
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
