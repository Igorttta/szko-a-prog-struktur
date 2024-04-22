// ArrayConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

void task1()
{
	/*
	*int number0 , number1 , number2 , number3;
	std::cout << "POdaj 1 liczb� ";
	std::cin >> number0;
	std::cout << "POdaj 2 liczb� ";
	std::cin >> number1;
	std::cout << "POdaj 3 liczb� ";
	std::cin >> number2;
	std::cout << "POdaj 4 liczb� ";
	std::cin >> number3;
	std::cout << number3 << " , " << number2 << number1 << " , " << number0 ;

	*/



}
//Napisz program obliczaj�cy �redni� arytmetyczn� element�w w tablicy liczb ca�kowitych.   
void task2()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 5;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 11;
		std::cout << numbers[i] << ".\n ";
	}
	std::cout << "\n\n";

	//licz� �redni�
	int sum = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		sum = sum + numbers[i];
		//sum += numbers[i];
	}

	double avg = sum * 1.0 / ARRAY_NUMBERS_SIZE;

	std::cout << "Suma: " << sum << "\n";
	std::cout << "�rednia to: " << avg << "\n";

}
//Napisz program, kt�ry uzupe�ni tablic� liczbami losowymi
// a nast�pnie znajdzie minimum oraz maksimum.
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
	std::cout << "NAjwi�ksza liczba to " << max << "\n";

	int min = numbers[0];
	for (int i = 1; i < ARRAY_NUMBERS_SIZE; i++)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}
	std::cout << "NAjwi�ksza liczba to " << min << "\n";

}
//Napisz program kt�ry wczyta numer dnia tygodnia a nast�pnie wt�wietl nazsw� tego dnia lub komunikat b�edu 

void task4()
{
	int dayNumberFromUser;
	std::cout << "Podaj numer dnia tygodnia:\n";
	std::cin >> dayNumberFromUser;

	std::string nameOfDayInWeek[7] = { "Poniedzia�ek", "Wtorek", };
	nameOfDayInWeek[0] = "Poniedzia�ek";
	nameOfDayInWeek[1] = "Wtorek";
	nameOfDayInWeek[2] = "�roda";
	nameOfDayInWeek[3] = "Czwartek";
	nameOfDayInWeek[4] = "Pi�tek";
	nameOfDayInWeek[5] = "Sobota";
	nameOfDayInWeek[6] = "Niedziela";

	if (dayNumberFromUser >= 0 && dayNumberFromUser <= 6)
	{
		std::cout << "Nazwa dnia to " << nameOfDayInWeek[dayNumberFromUser] << "\n";
	}
	else
	{
		std::cout << "Nie ma takiego dnia\n";
	}
}
void task5()
{
	const unsigned int ARRAY_NUMBERS_SIZE = 10;
	int numbers[ARRAY_NUMBERS_SIZE];

	srand(time(NULL));
	std::cout << "Liczby w kolekcji:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		numbers[i] = rand() % 100;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";

	//algorytm sortuj�cy
	for (int i = 0; i <= ARRAY_NUMBERS_SIZE - 2; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < ARRAY_NUMBERS_SIZE; j++)
		{
			if (numbers[j] < numbers[minIndex])
				minIndex = j;
		}
		int tmp = numbers[i];
		numbers[i] = numbers[minIndex];
		numbers[minIndex] = tmp;
	}

	std::cout << "Po posortowaniu:\n";
	for (int i = 0; i < ARRAY_NUMBERS_SIZE; i++)
	{
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n\n";
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
//   6. In the future, to open this project again, go to File > Open > Project and select the . sln file
