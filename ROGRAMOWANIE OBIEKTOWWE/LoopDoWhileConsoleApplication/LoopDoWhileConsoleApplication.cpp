// LoopDoWhileConsoleApplication.cpp 
#include <iostream>

/*
* Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej. Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
* Napisz program, który sprawdza czy wiêcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
* Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero. Oblicz sumê oraz œredni¹ arytmetyczn¹ wprowadzonych liczb.
*/

//Napisz program, który wczyta od u¿ytkownika liczbê dodatni¹
void task1()
{
	int number;

	/*
	std::cout << "Podaj liczbê dodatni¹\n";
	std::cin >> number;
	if (number < 0)
	{
		std::cout << "Podaj liczbê dodatni¹\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj liczbê dodatni¹\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj liczbê dodatni¹\n";
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
		std::cout << "Podaj liczbê dodatni¹\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Podano liczbê " << number << "\n";
}

//Napisz program, który wylosuje liczbê 
//a nastêpnie uzytkownik bêdzie musia³ j¹ zgadn¹æ.
void task2()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand() % 101;

	//std::cout << "Liczba losowa " << randomNumber << "\n";

	int numberFromUser;

	/*
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczbê:\n";
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
		std::cout << "Podaj liczbê:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za du¿a liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za ma³a liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!\nZga³eœ liczbê\n";
}

//Napisz program wyœwietlaj¹cy liczby ca³kowite z przedzia³u <0,x> (wartoœæ x podaje u¿ytkownik)
void task3()
{
	long long upperRange;
	std::cout << "Podaj górny zakres:\n";
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

//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task4()
{
	int number;
	do
	{
		std::cout << "Podaj liczbê dodatni¹\n";
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

//Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej.
//  Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task5()
{
	int number;
	do
	{
		std::cout << "Podaj liczbê dodatni¹\n";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigit = 0;
	do
	{
		number = number / 10;
		numberOfDigit++;
	} while (number > 0);

	std::cout << "Iloœæ cyfr w liczbie to " << numberOfDigit << "\n";
}

int main()
{
	task4();
}


