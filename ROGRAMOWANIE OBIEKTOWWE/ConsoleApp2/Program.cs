using System;

namespace NotatkiApp
{
    class notatka
    {
        private static int licznik = 0;
        private int id;
        protected string tytul;
        protected string tresc;

        public notatka(string tyt, string tres)
        {
            licznik++;
            id = licznik;
            tytul = tyt;
            tresc = tres;
        }

        public void pokaz()
        {
            Console.WriteLine("Tytul: " + tytul);
            Console.WriteLine("Tresc: " + tresc);
        }

        public void diag()
        {
            Console.WriteLine(id + ";" + tytul + ";" + tresc + ";" + licznik);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            notatka n1 = new notatka("Zakupy", "Kupic chleb i mleko");
            notatka n2 = new notatka("Trening", "Biegac   5km rano");

            Console.WriteLine("Pierwsza notatka:");
            n1.pokaz();
            n1.diag();

            Console.WriteLine("\nDruga notatka:");
            n2.pokaz();
            n2.diag();

            Console.ReadKey();
        }
    }
}
