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
 
	 if (password == "abc123" )
	 {
		 std::cout << "Dobre haslo";
	 }
	 else
	 {
		 std::cout << "Zle haslo";
	 }
 
 
 }
int main()
{
	//task1();
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