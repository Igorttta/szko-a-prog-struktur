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
	std::cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 11;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";

	//liczê œredni¹
	int sum = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		sum = sum + numbers[i];
		//sum += numbers[i];
	}

	double avg = sum * 1.0 / ARRAY_NUMBERS_SIZE;

	std::cout << "Suma: " << sum << "\n";
	std::cout << "Œrednia to: " << avg << "\n";

}
void task3()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 10;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "liczby w kolekcji:";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 101;
		std::cout << numbers[i] << " , ";
	}
	int max = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}
	std::cout << "NAjwiêksza liczba to " << max << "\n";

	int min = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}
	std::cout << "NAjwiêksza liczba to " << min << "\n";

}
//Napisz program który wczyta numer dnia tygodnia a nastêpnie wtœwietl nazswê tego dnia lub komunikat b³edu 

void task4()
{
	int numberFromUser;
	std::cout << "Podaj numer dnia tygodnia ";
	std::cin >> numberFromUser;


	for (int i = 0; i <= 7; i++)
	{
	}
	std::cout << " b³¹d";


}
#include <iostream>

int main()
{
	task3();
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
