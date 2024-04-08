// charactersConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//NApisz program który sprawdzi czy to ma³a llitera alfabetu czy duza 
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
	std::cout << "Poda³eœ ma³¹ literê alfabetu";
}
else
{
	std::cout << "Poda³œ inny znak";
}
*/
}
//wersja 2
/*
if (characterFromUSer >= 97
	&& characterFromUSer <= 122)
{
	std::cout << "Poda³eœ ma³¹ literê alfabetu";
}
else
{
	std::cout << "Poda³œ inny znak";
}
*/
//napisz program któy poprosi o twoje imie i ciê przywita
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
	std::cout << "POdja swoje  podaj ci¹g znaków";
	std::cin >> textFromUser;

	std::cout << "POdany text" << textFromUser;
	std::cout << "POdany text" << textFromUser[0];
	std::cout << "POdany text" << textFromUser[1];
	int length = textFromUser.length();
	std::cout << "D³ugoœæ ³añcucha znaków " << length;
	std::cout << "D³ugoœæ ³añcucha znaków " << textFromUser[length - 1];

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
		std::cout << "POdaj has³o";
		std::cin >> password;
	} while (password != "abc123");
	std::cout << "POda³eœ dobre has³o ";




}
void task6()
{
	std::string textFromUser;
	std::cout << "POdja swoje  podaj ci¹g znaków";
	std::cin >> textFromUser;

	std::string rii = "a" "o" "u" "e" "i" "y";
	int length = textFromUser.length();
	std::cout << "D³ugoœæ ³añcucha znaków " << textFromUser[length - 1];

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}
	std::cout << "fjsif";



}
//POproœ urzyrtkowmnika p w[rpwadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowyy binarny i wyœwietl wynik
void task7()
{
	int textFromUser;
	std::cout << "Podaj liczbê w systemi dziesiêtnym";
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
//Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")

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
	* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
	* Program wyci¹gaj¹cy informacje z numeru PESEL
	* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).*/

	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu

	// Tips for Getting Started: 
	//   1. Use the Solution Explorer window to add/manage files
	//   2. Use the Team Explorer window to connect to source control
	//   3. Use the Output window to see build output and other messages
	//   4. Use the Error List window to view errors
	//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
	//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
