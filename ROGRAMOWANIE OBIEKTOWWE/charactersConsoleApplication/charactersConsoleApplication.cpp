// charactersConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//NApisz program kt�ry sprawdzi czy to ma�a llitera alfabetu czy duza 
void task1()
{
	char characterFromUSer;
	std::cout << "Podaj jeden znak\n";
	std::cin >> characterFromUSer;
	/* wersja 1
if (characterFromUSer == 'a'

	|| characterFromUSer == 'b'
	|| characterFromUSer == 'c'
	|| characterFromUSer == 'd'
	//...
	|| characterFromUSer == 'z')

{
	std::cout << "Poda�e� ma�� liter� alfabetu";
}
else
{
	std::cout << "Poda�� inny znak";
}
*/
}
//wersja 2
/*
if (characterFromUSer >= 97
	&& characterFromUSer <= 122)
{
	std::cout << "Poda�e� ma�� liter� alfabetu";
}
else
{
	std::cout << "Poda�� inny znak";
}
*/
//napisz program kt�y poprosi o twoje imie i ci� przywita
void task2()
{
	std::string name;
	std::cout << "POdja swoje imie";
	std::cin >> name;

	std::cout << "Witaj " << name << "tutaj";


}
void task3()
{
	std::string password;
	std::cout << "POdja swoje haslo";
	std::cin >> password;

	if (password == "abc123")
	{
		std::cout << "Dobre haslo";
	}
	else
	{
		std::cout << "Zle haslo";
	}


}
void task4()
{

	std::string textFromUser;
	std::cout << "POdja swoje  podaj ci�g znak�w";
	std::cin >> textFromUser;

	std::cout << "POdany text" << textFromUser;
	std::cout << "POdany text" << textFromUser[0];
	std::cout << "POdany text" << textFromUser[1];
	int length = textFromUser.length();
	std::cout << "D�ugo�� �a�cucha znak�w " << length;
	std::cout << "D�ugo�� �a�cucha znak�w " << textFromUser[length - 1];

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}
	std::cout << "fjsif";





}
void task5()
{
	std::string password;
	do
	{
		std::cout << "POdaj has�o";
		std::cin >> password;
	} while (password != "abc123");
	std::cout << "POda�e� dobre has�o ";




}
void task6()
{
	std::string textFromUser;
	std::cout << "POdja swoje  podaj ci�g znak�w";
	std::cin >> textFromUser;

	std::string rii = "a" "o" "u" "e" "i" "y";
	int length = textFromUser.length();
	std::cout << "D�ugo�� �a�cucha znak�w " << textFromUser[length - 1];

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}
	std::cout << "fjsif";



}
//POpro� urzyrtkowmnika p w[rpwadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowyy binarny i wy�wietl wynik
void task7()
{
	int textFromUser;
	std::cout << "Podaj liczb� w systemi dziesi�tnym";
	std::cin >> textFromUser;

	int tmpNumber = textFromUser;
	std::string binNumber = "";
	do
	{
		int rest = tmpNumber % 2;
		tmpNumber = tmpNumber / 2;
		if (rest == 0)
		{
			binNumber = "0" + binNumber;
		}
		else
		{
			binNumber = "1" + binNumber;
		}
	} while (tmpNumber != 0);



	std::cout << "Liczba" << textFromUser << "binarnie t o" << binNumber << "\n";



}
//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem(czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")

void task8()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz";
	std::cin >> textFromUser;

	bool isPAlindrome = true;
	for (int fromStart = 0, fromEnd = textFromUser.length() - 1; fromStart < fromEnd; fromStart++, fromEnd--)
	{
		if (textFromUser[fromStart] != textFromUser[fromEnd])
		{
			isPAlindrome = false;
			break;
		}
	}
	if (isPAlindrome == true)
	{
		std::cout << "JEst palindromem";
	}
	else
	{
		std::cout << "NIE jest palindromem";
	}
	int main()
	{
		task7();
	}
	/*
	* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
	* Program wyci�gaj�cy informacje z numeru PESEL
	* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).*/

	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu

	// Tips for Getting Started: 
	//   1. Use the Solution Explorer window to add/manage files
	//   2. Use the Team Explorer window to connect to source control
	//   3. Use the Output window to see build output and other messages
	//   4. Use the Error List window to view errors
	//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
	//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
