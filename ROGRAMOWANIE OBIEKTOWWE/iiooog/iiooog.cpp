// iiooog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//NApisz program, kt�ry wczyta  urytkownika jego wiek a nast�pnie wy�wietli go na konsoli.
void task1()

{
	short ageFromUser;
	std::cout << "podaj swoj wiek.\n";
	std::cin >> ageFromUser;

	std::cout << "Masz" << ageFromUser << "lat.\n";
}

//Stw�rz program kt�ry pobiera od urzytkownika 
//d�ugos� w metrach i przelicza j� na centymetry,
//milimetry i kilometry.Wy�wietl wynik
task2()
{
	float lengthInMeterFromUser;
	std::cout << "POdaj D�ugo�� w metrach\n ";
	std::cin >> lengthInMeterFromUser;

	float  LenghtInCentimeter;
	LenghtInCentimeter = lengthInMeterFromUser * 100;

	float lenghtInMilimeter = LenghtInCentimeter * 10;

	float lenghtInKilometer = lengthInMeterFromUser / 1000;

	std::cout << "Metry:" << lengthInMeterFromUser << "\n";
	std::cout << "Centymetry:" << LenghtInCentimeter << "\n";
	std::cout << "Kilometry:" << lenghtInKilometer << "\n";
	std::cout << "Milimetry:" << lenghtInMilimeter << "\n";


}

int main()
{
	//task1();
	task1();
	task2();
}

/*
Algortym- Sko�czony zbi�r instrukcji realizuj�cych postawione przed nim zadanie.
Kolejno�� instrukcji w zbiorze jest okre�lona
Sposoby zapisu:
w punktach
opis s�owny
j�zyk programowania lub pseudokod
zbi�r rysunk�w
schemat blokowy

zmienna-jest to pewien obszar pamieci, s��cy do przechowywania danych. Te dane mazna modyfikowa�
zmienna pozwala przechowa� tylko jedn� wartos� w danym momencie czasu.

deklaracaja zmiennej - moment jej utworzenia

typ_zmiennej nazwa_zmiennej;
typ zmiennej m�wi o wielko��i obszaru pami�ci i o rodzaju przechowywania danych

short		liczby ca�kowite ze znakiem 2 bajty	<-32 768; 32 767>
int/long	liczby ca�kowite ze znakiem 4 bajt  <-2 147 483 648 ; 2 147 483 647>
long long	liczby ca�kowite ze znakiem 8 bajt	<- 9 223 372 036 854 775 888 ; 9 223 372 036 854 775 887


 Je�eli przed powyrzyszymi tpyami dodamy s�owo "unsigned" to zakres jest od zera do podwojonego zakresu g�nego
 plus 1.

 float liczby rzeczywiste ze znakiem 4 bajty
 double liczby rzeczywiste ze znakiem 8 bajty
long double liczby rzeczywiste ze znakiem 12 bajty

Nazwa zmiennej -nazwa obszaru w pami�ci. Poprzez ta nazw� odwo�ujemy si� do obszaru.

Wymagania kompilatora wzgledem nazwy
-u�ycie tylko dozwolonych znak�w
-alfabet angielski a-z oraz A-Z
-yry arbaskie 0-9
-podkre�lenie (pod�oga)
* pierwszym znakiem nie mo�e by� cyfra
* nie mo�e to by� s�owo kluczowe danego j�zyka programowania
* musi by� unikalna w danej widoczno�ci

Wymagania programist�w:
* je�li nazwa sk��da si� z wielu wyraz�w to zamiast spacji:
	- u�ywamy znaku podkre�lenia np. first_number_from_user
	- stosujemy camel case, czyli piszemy wszystko razem a s�owa (zaczynamy od drugiego)
	  zaczynamy z du�ej litery np. firstNumberFromUser
* nazwa zmiennej musi oddawa� charakter przechowywanych danych, czyli mie� znaczenie
* nazwy po angielsku !!!!

*/