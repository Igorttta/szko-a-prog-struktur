
#include <iostream>
#include <math.h>

/*
ZADANIE
Tw�j cel: napisa� funkcj� w C++, kt�ra:

przegl�da kolejne cyfry liczby,

sprawdza, czy s� nieparzyste,

skleja je w now� liczb�.


*/
/*
int doesnumberIsparzysta(){
	int  number;
	std::cout << "podaj liczbe ";
	std::cin >> number;

	 int number2 = number % 10;
	
}*/
int main()
{
	int x, y, i;
	std::cout << "podaj ilo�c metalu  \n";
	std:: cin >> x;
	std::cout << "podaj ilo�c kryszta�  \n";
	std:: cin >> y;

	std::cout << "podaj ilo�c deuter  \n";
	std::cin >> i;

	if ( x > 20000 && y > 7000 && i > 2000)
	{
		 int x1 = x / 20000;
		 int y1 = y / 7000;
		int 	i1 = i / 2000;
		if (x1 <= y1 && x1 <= i1)
		{
			std::cout << "Metal ogranicza zakup statk�w. Mo�esz kupi� " << x1 << " statk�w.\n";
		}
		else if (y1 <= x1 && y1 <= i1)
		{
			std::cout << "Kryszta� ogranicza zakup statk�w. Mo�esz kupi� " << y1 << " statk�w.\n";
		}
		else
		{
			std::cout << "Deuter ogranicza zakup statk�w. Mo�esz kupi� " << i1 << " statk�w.\n";
		}

	}
	else
	{
		std::cout << "nie mozesz kupic statku ";
	}
	int liczba;
	// Zadanie 1:
// Wczytaj liczb� i wypisz jej warto�� bezwzgl�dn�.
// U�yj: std::abs z <cmath>, printf / scanf z <cstdio>
// 	   zadanie przyk��dowe 
	// Wczytaj liczb� od u�ytkownika
	printf("Podaj liczbe calkowita: ");
	scanf("%d", &liczba);

	// Oblicz warto�� bezwzgl�dn� i wypisz wynik
	int wynik = std::abs(liczba);  // u�ycie std::abs z <cmath>

	printf("Wartosc bezwzgledna: %d\n", wynik);
// Zadanie 2:
// Wczytaj liczb� rzeczywist� i wypisz jej pierwiastek kwadratowy.
// U�yj: std::sqrt z <cmath>

// Zadanie 3:
// Oblicz pole ko�a o promieniu podanym przez u�ytkownika.
// U�yj: std::pow lub mno�enie, sta�a M_PI z <cmath>

// Zadanie 4:
// Oblicz pot�g� liczby (podstawa i wyk�adnik podane przez u�ytkownika).
// U�yj: std::pow z <cmath>

// Zadanie 5:
// Wczytaj k�t w stopniach i oblicz jego sinus i cosinus (po przeliczeniu na radiany).
// U�yj: std::sin, std::cos z <cmath>

// Zadanie 6:
// Oblicz logarytm naturalny z podanej liczby dodatniej.
// U�yj: std::log z <cmath>

// Zadanie 7:
// Wczytaj liczb� zmiennoprzecinkow� i zaokr�glij j� w g�r� i w d�.
// U�yj: std::ceil i std::floor z <cmath>

// Zadanie 8:
// Wczytaj dwie liczby i wypisz wi�ksz� z nich.
// U�yj: std::fmax z <cmath>

// Zadanie 9:
// Oblicz d�ugo�� przeciwprostok�tnej w tr�jk�cie prostok�tnym (a i b podane).
// U�yj: std::sqrt, std::pow z <cmath>

// Zadanie 10:
// Zapisz dane (np. wynik dzia�ania funkcji matematycznej) do pliku tekstowego.
// U�yj: fopen, fprintf, fclose z <cstdio>

// Zadanie 11:
// Wczytaj dane z pliku, oblicz ich �redni� arytmetyczn� i wypisz j�.
// U�yj: fopen, fscanf, fclose z <cstdio>

// Zadanie 12:
// Napisz kalkulator funkcji trygonometrycznych: u�ytkownik wybiera funkcj� i podaje k�t.
// U�yj: std::sin, std::cos, std::tan, std::atan z <cmath> oraz scanf / printf z <cstdio>

	

}

