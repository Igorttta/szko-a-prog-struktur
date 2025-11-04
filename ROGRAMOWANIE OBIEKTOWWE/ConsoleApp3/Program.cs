using System;

namespace FilmyApp
{
    /******************************************************
      nazwa klasy: film
      pola:        tytulFilmu - przechowuje tytuł filmu
                   liczbaWyp - przechowuje liczbę wypożyczeń
      metody:      setTytul(string) – ustawia tytuł filmu
                   getTytul() – zwraca tytuł
                   getLiczba() – zwraca liczbę wypożyczeń
                   inkrementuj() – zwiększa liczbę wypożyczeń o 1
      informacje:  Klasa reprezentuje film w systemie wypożyczalni
      autor:       12345678901
     *****************************************************/

    class film
    {
        protected string tytulFilmu;
        protected int liczbaWyp;

        public film()
        {
            tytulFilmu = "";
            liczbaWyp = 0;
        }

        public void setTytul(string nowyTyt)
        {
            tytulFilmu = nowyTyt;
        }

        public string getTytul()
        {
            return tytulFilmu;
        }

        public int getLiczba()
        {
            return liczbaWyp;
        }

        public void inkrementuj()
        {
            liczbaWyp++;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            film mojFilm = new film();

            Console.WriteLine("Podaj tytul filmu: ");
            string tytul = Console.ReadLine();
            mojFilm.setTytul(tytul);

            Console.WriteLine("Film: " + mojFilm.getTytul());
            Console.WriteLine("Liczba wypozyczen: " + mojFilm.getLiczba());

            Console.WriteLine("\nZwiekszamy liczbe wypozyczen...");
            mojFilm.inkrementuj();

            Console.WriteLine("Nowa liczba wypozyczen: " + mojFilm.getLiczba());

            Console.ReadKey();
        }
    }
}
