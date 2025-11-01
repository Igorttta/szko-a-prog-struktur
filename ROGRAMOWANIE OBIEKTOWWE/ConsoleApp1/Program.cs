using System;

namespace NWD_Euklides
{
    class Program
    {
        /**********************************************
        nazwa funkcji:   NWD
        opis funkcji:    Oblicza największy wspólny dzielnik dwóch liczb całkowitych dodatnich.
        parametry:       a – pierwsza liczba
                         b – druga liczba
        zwracany typ i opis: int – największy wspólny dzielnik liczb a i b
        autor:           12345678901   // tutaj wpisz swój numer zdającego (PESEL)
        ***********************************************/

        static int NWD(int a, int b)
        {
            // Algorytm Euklidesa (dzielenie z resztą)
            while (a != b)
            {
                if (a > b)
                    a = a - b;
                else
                    b = b - a;
            }
            return a; // lub b (bo są równe)
        }

        static void Main(string[] args)
        {
            Console.WriteLine("PROGRAM DO OBLICZANIA NWD DWÓCH LICZB");
            Console.WriteLine("-------------------------------------");

            // Pobieranie danych od użytkownika
            Console.Write("Podaj pierwszą liczbę (a): ");
            int a = int.Parse(Console.ReadLine());

            Console.Write("Podaj drugą liczbę (b): ");
            int b = int.Parse(Console.ReadLine());

            // Sprawdzenie poprawności danych
            if (a <= 0 || b <= 0)
            {
                Console.WriteLine("Podaj liczby dodatnie!");
                return;
            }

            // Wywołanie funkcji
            int wynik = NWD(a, b);

            // Wyświetlenie wyniku
            Console.WriteLine($"Największy wspólny dzielnik (NWD) liczb {a} i {b} to: {wynik}");

            Console.WriteLine("\nNaciśnij dowolny klawisz, aby zakończyć...");
            Console.ReadKey();
        }
    }
}

