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
	std::cout << "D³ugoœæ ³añcucha znaków " << textFromUser[ length  - 1];

	int counter = 0;
	for (int  i = 0; i < length; i++)
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
	} while ( password != "abc123");
	std::cout << "POda³eœ dobre has³o ";
	



}
void task6()
{
	std::string textFromUser;
	std::cout << "POdja swoje  podaj ci¹g znaków";
	std::cin >> textFromUser;

	std::string rii = "a" "o" "u" "e" "i" "y";
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
int main()
{
	//task1();
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
