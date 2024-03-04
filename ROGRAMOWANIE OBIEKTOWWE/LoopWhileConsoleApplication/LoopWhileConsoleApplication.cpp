// LoopWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	int number;
	do
	{
		std::cout << "podaj liczbê dodatni¹\n ";
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
		std::cout << "POdaj  pierwsza liczbê";
		std::cin >> a;

		int b;
		std::cout << "POdaj  drug¹ liczbê";
		std::cin >> b;
		if (b != 0)
		{
			int tmpA = a;
			a = b;
			if (b != 0)
			{
				//..
			}
		}


	}

int main()
{
	task1();
	task2();

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
