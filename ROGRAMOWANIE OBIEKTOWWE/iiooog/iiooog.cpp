// iiooog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//NApisz program, który wczyta  urytkownika jego wiek a nastêpnie wyœwietli go na konsoli.
void task1()

{
	short ageFromUser;
	std::cout << "podaj swoj wiek.\n";
	std::cin >> ageFromUser;

	std::cout << "Masz" << ageFromUser << "lat.\n";
}

//Stwórz program który pobiera od urzytkownika 
//d³ugosæ w metrach i przelicza j¹ na centymetry,
//milimetry i kilometry.Wyœwietl wynik
task2()
{
	float lengthInMeterFromUser;
	std::cout << "POdaj D³ugoœæ w metrach\n ";
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
Algortym- Skoñczony zbiór instrukcji realizuj¹cych postawione przed nim zadanie.
Kolejnoœæ instrukcji w zbiorze jest okreœlona
Sposoby zapisu:
w punktach
opis s³owny
jêzyk programowania lub pseudokod
zbiór rysunków
schemat blokowy

zmienna-jest to pewien obszar pamieci, s³ó¿¹cy do przechowywania danych. Te dane mazna modyfikowaæ
zmienna pozwala przechowaæ tylko jedn¹ wartosæ w danym momencie czasu.

deklaracaja zmiennej - moment jej utworzenia

typ_zmiennej nazwa_zmiennej;
typ zmiennej mówi o wielkoœæi obszaru pamiêci i o rodzaju przechowywania danych

short		liczby ca³kowite ze znakiem 2 bajty	<-32 768; 32 767>
int/long	liczby ca³kowite ze znakiem 4 bajt  <-2 147 483 648 ; 2 147 483 647>
long long	liczby ca³kowite ze znakiem 8 bajt	<- 9 223 372 036 854 775 888 ; 9 223 372 036 854 775 887


 Je¿eli przed powyrzyszymi tpyami dodamy s³owo "unsigned" to zakres jest od zera do podwojonego zakresu gónego
 plus 1.

 float liczby rzeczywiste ze znakiem 4 bajty
 double liczby rzeczywiste ze znakiem 8 bajty
long double liczby rzeczywiste ze znakiem 12 bajty

Nazwa zmiennej -nazwa obszaru w pamiêci. Poprzez ta nazwê odwo³ujemy siê do obszaru.

Wymagania kompilatora wzgledem nazwy
-u¿ycie tylko dozwolonych znaków
-alfabet angielski a-z oraz A-Z
-yry arbaskie 0-9
-podkreœlenie (pod³oga)
* pierwszym znakiem nie mo¿e byæ cyfra
* nie mo¿e to byæ s³owo kluczowe danego jêzyka programowania
* musi byæ unikalna w danej widocznoœci

Wymagania programistów:
* jeœli nazwa sk³¹da siê z wielu wyrazów to zamiast spacji:
	- u¿ywamy znaku podkreœlenia np. first_number_from_user
	- stosujemy camel case, czyli piszemy wszystko razem a s³owa (zaczynamy od drugiego)
	  zaczynamy z du¿ej litery np. firstNumberFromUser
* nazwa zmiennej musi oddawaæ charakter przechowywanych danych, czyli mieæ znaczenie
* nazwy po angielsku !!!!

*/