
#include <iostream>

/*

Funkcja - zbi�r instrukcji. Definicja/deklaracja funkcji sk�ada si� z dw�ch cz�ci:
* nag�wek - spos�b u�ycia funkcji
	- typ zwracany
	- nazwa (poprawny identyfikator)
	- parametr�w w nawiasie (nieobowi�znowe)
* cia�o - zbi�r instrukcji

typZwracany nazwaFuncji(parametry)
{
	//cia�o funcji
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
	std::cout << "Warto�� parametru " << p;
	p++;
	std::cout << "Warto�� parametru " << p;


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
	showWelcome("maciu�"), 9, "[redacted]";

int varieble = 5;
std::cout << "Warto�� zmiennej przed fukvcj�" << variable;

}