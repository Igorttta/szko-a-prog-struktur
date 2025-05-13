
#include <iostream>
#include <math.h>

/*
ZADANIE
Twój cel: napisaæ funkcjê w C++, która:

przegl¹da kolejne cyfry liczby,

sprawdza, czy s¹ nieparzyste,

skleja je w now¹ liczbê.


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
	std::cout << "podaj iloœc metalu  \n";
	std:: cin >> x;
	std::cout << "podaj iloœc kryszta³  \n";
	std:: cin >> y;

	std::cout << "podaj iloœc deuter  \n";
	std::cin >> i;

	if ( x > 20000 && y > 7000 && i > 2000)
	{
		 int x1 = x / 20000;
		 int y1 = y / 7000;
		int 	i1 = i / 2000;
		if (x1 <= y1 && x1 <= i1)
		{
			std::cout << "Metal ogranicza zakup statków. Mo¿esz kupiæ " << x1 << " statków.\n";
		}
		else if (y1 <= x1 && y1 <= i1)
		{
			std::cout << "Kryszta³ ogranicza zakup statków. Mo¿esz kupiæ " << y1 << " statków.\n";
		}
		else
		{
			std::cout << "Deuter ogranicza zakup statków. Mo¿esz kupiæ " << i1 << " statków.\n";
		}

	}
	else
	{
		std::cout << "nie mozesz kupic statku ";
	}
	int liczba;
	// Zadanie 1:
// Wczytaj liczbê i wypisz jej wartoœæ bezwzglêdn¹.
// U¿yj: std::abs z <cmath>, printf / scanf z <cstdio>
// 	   zadanie przyk³¹dowe 
	// Wczytaj liczbê od u¿ytkownika
	printf("Podaj liczbe calkowita: ");
	scanf("%d", &liczba);

	// Oblicz wartoœæ bezwzglêdn¹ i wypisz wynik
	int wynik = std::abs(liczba);  // u¿ycie std::abs z <cmath>

	printf("Wartosc bezwzgledna: %d\n", wynik);
// Zadanie 2:
// Wczytaj liczbê rzeczywist¹ i wypisz jej pierwiastek kwadratowy.
// U¿yj: std::sqrt z <cmath>

// Zadanie 3:
// Oblicz pole ko³a o promieniu podanym przez u¿ytkownika.
// U¿yj: std::pow lub mno¿enie, sta³a M_PI z <cmath>

// Zadanie 4:
// Oblicz potêgê liczby (podstawa i wyk³adnik podane przez u¿ytkownika).
// U¿yj: std::pow z <cmath>

// Zadanie 5:
// Wczytaj k¹t w stopniach i oblicz jego sinus i cosinus (po przeliczeniu na radiany).
// U¿yj: std::sin, std::cos z <cmath>

// Zadanie 6:
// Oblicz logarytm naturalny z podanej liczby dodatniej.
// U¿yj: std::log z <cmath>

// Zadanie 7:
// Wczytaj liczbê zmiennoprzecinkow¹ i zaokr¹glij j¹ w górê i w dó³.
// U¿yj: std::ceil i std::floor z <cmath>

// Zadanie 8:
// Wczytaj dwie liczby i wypisz wiêksz¹ z nich.
// U¿yj: std::fmax z <cmath>

// Zadanie 9:
// Oblicz d³ugoœæ przeciwprostok¹tnej w trójk¹cie prostok¹tnym (a i b podane).
// U¿yj: std::sqrt, std::pow z <cmath>

// Zadanie 10:
// Zapisz dane (np. wynik dzia³ania funkcji matematycznej) do pliku tekstowego.
// U¿yj: fopen, fprintf, fclose z <cstdio>

// Zadanie 11:
// Wczytaj dane z pliku, oblicz ich œredni¹ arytmetyczn¹ i wypisz j¹.
// U¿yj: fopen, fscanf, fclose z <cstdio>

// Zadanie 12:
// Napisz kalkulator funkcji trygonometrycznych: u¿ytkownik wybiera funkcjê i podaje k¹t.
// U¿yj: std::sin, std::cos, std::tan, std::atan z <cmath> oraz scanf / printf z <cstdio>

	

}

