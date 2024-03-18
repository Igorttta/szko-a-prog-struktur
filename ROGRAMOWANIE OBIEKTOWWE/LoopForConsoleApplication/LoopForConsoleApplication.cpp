﻿
#include <iostream>

/*
* Program obliczający n!.
* Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).

*

* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po
przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6).
Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.


*/




/*
Program, który drukuje na ekranie prostokąt z literek X. Wysokość i szerokość prostokąta wczytujemy z klawiatury.
Poniższy prostokąt ma wymiary: szer=10, wys=4.
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
*/
void task2()
{
	int width, height;
	std::cout << "Podaj wysokość\n";
	std::cin >> height;
	std::cout << "Podaj szerokość\n";
	std::cin >> width;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "X";
		}
		std::cout << "\n";
	}
}

//Program obliczający sumę liczb od 1 do 100
void task3()
{
	int suma = 0;

	for (int i = 1; i <= 100; ++i) {
		suma += i;
	}

	std::cout << "Suma liczb od 1 do 100 wynosi: " << suma << std::endl;

}




//Program sprawdzający sumęczy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników
// (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task4()
{

}
//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task5()
{

	
		for (int i = 1; i <= 10; ++i) {
			int kwadrat = i * i;
			std::cout << kwadrat;
			if (i < 10) {
				std::cout << ", ";
			}
		}
		std::cout << std::endl;

	}

//Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task6()
{
	int firstNumber = 0;
	int secoundNumber = 1;

	for (int i = 0; i < 20; i++)
	{




	}






}
/*
Program, kóry wyświetli poniższe wzory :

* 	****     *       54321        121212        122333
	***     ***      65432        212121        223334444
	**     *****     76543        121212        333444455555
	*     *******    87654        212121        444455555666666
*/
void task7()
{
	int width = 0;
	int height = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << "X";
			while (j < 3)
			{
				std::cout << "X";
			}
			while (j < 2)
			{
				std::cout << "X";
			}
			while (j < 1)
			{
				std::cout << "X";
			}
		}

		std::cout << "\n";
	}



}
//Napisz program, który rozkłoży liczbę na czynniki pierwsze.
void task8()
{


}
//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task9()
{



}
//Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
void task10()
{
	int numberBase;
	std::cout << "napisz podstawę";
	std::cin >> numberBase;
	int exponentOfTheNumber;
	std::cout << "napisz wykładnik";
	std::cin >> exponentOfTheNumber;
	for (int i = 0; i < exponentOfTheNumber; i++)
	{
		int result = numberBase * numberBase ;
	}


}
//Program obliczający n!.
void task10()
{

}
// Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task11()
{

}
//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task12()
{

}


//Oblicz sumę szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po
//przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π(suma szeregu jest równa π2 / 6).
//Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
void task13()
{

}

int main()
{
	task5();
}