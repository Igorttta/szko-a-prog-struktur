using System;

namespace KonsolaOsoba
{
    class Osoba
    {
        private int id;
        private string imie;

        public static int liczbaOsob = 0;

        public Osoba()
        {
            id = 0;
            imie = "";
            liczbaOsob++;
        }

        public Osoba(int id, string imie)
        {
            this.id = id;
            this.imie = imie;
            liczbaOsob++;
        }

        public Osoba(Osoba innaOsoba)
        {
            this.id = innaOsoba.id;
            this.imie = innaOsoba.imie;
            liczbaOsob++;
        }

        public void Przywitaj(string imieRozmowcy)
        {
            if (string.IsNullOrEmpty(this.imie))
            {
                Console.WriteLine("Brak danych");
            }
            else
            {
                Console.WriteLine($"Cześć {imieRozmowcy}, mam na imię {imie}");
            }
        }
    }

    // Program główny - test klasy
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine($"Liczba zarejestrowanych osób to {Osoba.liczbaOsob}");

            Osoba osoba1 = new Osoba();

            Console.Write("Podaj id osoby: ");
            int id = int.Parse(Console.ReadLine());
            Console.Write("Podaj imię osoby: ");
            string imie = Console.ReadLine();
            Osoba osoba2 = new Osoba(id, imie);

            Osoba osoba3 = new Osoba(osoba2);

            osoba1.Przywitaj("Jan");
            osoba2.Przywitaj("Jan");
            osoba3.Przywitaj("Jan");

            Console.WriteLine($"Liczba zarejestrowanych osób to {Osoba.liczbaOsob}");
        }
    }
}
