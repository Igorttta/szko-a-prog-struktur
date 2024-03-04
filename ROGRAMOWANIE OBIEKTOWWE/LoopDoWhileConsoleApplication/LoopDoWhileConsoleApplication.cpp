// LoopDoWhileConsoleApplication.cpp 
#include <iostream>

/*
* Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej. Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
* Napisz program, kt�ry sprawdza czy wi�cej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
* Popro� u�ytkownika o podawanie liczb, a� wprowadzi zero. Oblicz sum� oraz �redni� arytmetyczn� wprowadzonych liczb.
*/

//Napisz program, kt�ry wczyta od u�ytkownika liczb� dodatni�
void task1()
{
	int number;

	/*
	std::cout << "Podaj liczb� dodatni�\n";
	std::cin >> number;
	if (number < 0)
	{
		std::cout << "Podaj liczb� dodatni�\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczb� dodatni�\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj liczb� dodatni�\n";
				std::cin >> number;
				if (number < 0)
				{
					//....
				}
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczb� dodatni�\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Podano liczb� " << number << "\n";
}

//Napisz program, kt�ry wylosuje liczb� 
//a nast�pnie uzytkownik b�dzie musia� j� zgadn��.
void task2()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand() % 101;

	//std::cout << "Liczba losowa " << randomNumber << "\n";

	int numberFromUser;

	/*
	std::cout << "Podaj liczb�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczb�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczb�:\n";
			std::cin >> numberFromUser;
			if (numberFromUser != randomNumber)
			{
				//...
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczb�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za du�a liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za ma�a liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!\nZga�e� liczb�\n";
}

//Napisz program wy�wietlaj�cy liczby ca�kowite z przedzia�u <0,x> (warto�� x podaje u�ytkownik)
void task3()
{
	long long upperRange;
	std::cout << "Podaj g�rny zakres:\n";
	std::cin >> upperRange;

	/*
	std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if (upperRange >= 3)
			{
				//...
			}
		}
	}
	*/

	int number = 0;
	do
	{
		std::cout << number << ", ";
		number++;
	} while (upperRange >= number);
}

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task4()
{
	int number;
	do
	{
		std::cout << "Podaj liczb� dodatni�\n";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigits = 0;

	do
	{
		/*
		tmpNumber = -1;
		do
		{
			tmpNumber++;
		} while ((number - tmpNumber) % 10 != 0);

		std::cout << tmpNumber << ", ";
		*/

		int rest = number % 10;
		//std::cout << rest << ", ";
		sumOfDigits = sumOfDigits + rest;

		number = number / 10;

	} while (number > 0);
	std::cout << "Suma cyfr wynosi " << sumOfDigits << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej.
//  Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
void task5()
{
	int number;
	do
	{
		std::cout << "Podaj liczb� dodatni�\n";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigit = 0;
	do
	{
		number = number / 10;
		numberOfDigit++;
	} while (number > 0);

	std::cout << "Ilo�� cyfr w liczbie to " << numberOfDigit << "\n";
}

int main()
{
	task4();
}


