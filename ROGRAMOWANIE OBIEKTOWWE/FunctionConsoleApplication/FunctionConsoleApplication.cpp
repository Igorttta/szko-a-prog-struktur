
#include <iostream>

/*

Funkcja - zbiór instrukcji. Definicja/deklaracja funkcji sk³ada siê z dwóch czêœci:
* nagówek - sposób u¿ycia funkcji
	- typ zwracany
	- nazwa (poprawny identyfikator)
	- parametrów w nawiasie (nieobowi¹znowe)
* cia³o - zbiór instrukcji

typZwracany nazwaFuncji(parametry)
{
	//cia³o funcji
}
*/

/*

void showHello()
{
	std::wcout << "hello world";
}
void showWelcome(std::string n)
{

	std::cout << "siema";
}
void showWelcome(std::string n, int w)
{
	showWelcome(n);
	std::cout << "wiek to " << w;
}
void showWelcome(std::string n, int w, std::string a)
{
	showWelcome(n, w);
	std::cout << "Adres to " << a << "\n";

}
*/

void paraeterTest(int& p)
{
	std::cout << "Wartoœæ parametru " << p;
	p++;
	std::cout << "Wartoœæ parametru " << p;


}
int main()
{
	showHello();


	std::string name;
	name = "MAciek";
	showWelcome(name);
	name = "Jan";
	showWelcome(name);
	showWelcome("Anna");
	showWelcome("maciuœ"), 9, "[redacted]";

int varieble = 5;
std::cout << "Wartoœæ zmiennej przed fukvcj¹" << variable;

}