// ArrayConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

void task1()
{
	/*
	*int number0 , number1 , number2 , number3;
	std::cout << "POdaj 1 liczbê ";
	std::cin >> number0;
	std::cout << "POdaj 2 liczbê ";
	std::cin >> number1;
	std::cout << "POdaj 3 liczbê ";
	std::cin >> number2;
	std::cout << "POdaj 4 liczbê ";
	std::cin >> number3;
	std::cout << number3 << " , " << number2 << number1 << " , " << number0 ;

	*/



}
void task2()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 5;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "liczby w kolekcji:";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 101;
		std::cout << numbers[i] << " , ";
	}


}
#include <iostream>

int main()
{
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
//   6. In the future, to open this project again, go to File > Open > Project and select the . sln file
