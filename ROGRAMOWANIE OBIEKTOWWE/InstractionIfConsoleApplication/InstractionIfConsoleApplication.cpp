#include <iostream>


/*

Priorytety operatorów:

* /
+ -
> < >= <= == !=
&&
||
=

Operatory porównania:
>   większości
<   mniejszości
>=  wieksze bądź równe
<=  mniesze bądź równe
==  równe
!=  różne

Operatory logiczne:

||  or/lub
&&  and/i
!   not/nie


 A  B   A || B      A && B      !A
 f  f      f           f         t
 f  t      t           f
 t  f      t           f         f
 t  t      t           t


*/

//Napisz program, który pobierze liczbę od użytkownika i wyświetli czy jest ona dodatnia czy nie.
void task1()
{
    int number;
    std::cout << "Podaj liczbę \n";
    std::cin >> number;

    //wersja 1
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }

    if (number <= 0)
    {
        std::cout << "Liczba jest ujemna\n";
    }

    //wersja 2
    if (number > 0)
    {
        std::cout << "Liczba jest dodatnia\n";
    }
    else
    {
        std::cout << "Liczba jest ujemna\n";
    }


    //std::cout << "dfgsdf";
}

//Napisz program, który wczyta liczbę 
//i sprawdzi czy jest ona z zakresu <1;10).
void task2()
{
    int number;
    std::cout << "Podaj liczbę \n";
    std::cin >> number;

    //wersja 1
    if (number >= 1)
    {
        if (number < 10)
        {
            std::cout << "Liczba jest w zakresie\n";
        }
        else
        {
            std::cout << "Liczba nie jest w zakresie\n";
        }
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie\n";
    }

    //wersja 2
    if (number >= 1 && number < 10)
    {
        std::cout << "Liczba jest w zakresie\n";
    }
    else
    {
        std::cout << "Liczba nie jest w zakresie\n";
    }
}

// Napisz program który poprosi urzytkownika o podanie 4 liczb i wybierze najwiékszá
void task3()
{
    int firstNumber , secondNumber , thirdNumber , fourthNumber ;
        std::cout << "Podaj liczbę\n ";
       std :: cin >> firstNumber ;
       std::cout << "Podaj liczbę\n ";
       std::cin >> secondNumber ;
       std::cout << "Podaj liczbę\n ";
       std::cin >> thirdNumber;
       std::cout << "Podaj liczbę\n ";
       std::cin >> fourthNumber ;
       if (fourthNumber > firstNumber
           && fourthNumber > secondNumber
           && fourthNumber > thirdNumber)
           std::cout << "Najwieksza wartość to " << fourthNumber;
       else
       {
           if (thirdNumber > firstNumber && thirdNumber > secondNumber )
               std::cout << "Najwieksza wartość to " << thirdNumber ;
           else
           {
               if (secondNumber > firstNumber)
                   std::cout << "Najwieksza wartość to " << secondNumber ;
               else
                   std::cout << "Najwieksza wartość to " << firstNumber ;
           }
       }
}

//Napisz program który poprosi urzytkownia o podanie 2 liczb i wipisze je w kolejnosci rosnácej 
void task4()
{
    int Firstnumber;
    std::cout << "Podaj liczbę \n";
    std::cin >> Firstnumber;
    int Secondnumber;
    std::cout << "Podaj liczbę \n";
    std::cin >> Secondnumber;
    std::cout << "LIczby w kolejnosci rosnacej:\n";

    if (Firstnumber > Secondnumber )
    {
        std::cout << Secondnumber << "," << Firstnumber;
    }
    else
    {
        std::cout << Firstnumber << "," << Secondnumber;
    }

}

//Napisz program który poprosi urzytkownia o podanie 3 liczb i wipisze je w kolejnosci rosnácej 
void task5()
{
    int firstNumber;
    std::cout << "Podaj liczbę \n";
    std::cin >> firstNumber;
    int secondNumber;
    std::cout << "Podaj liczbę \n";
    std::cin >> secondNumber;
    int thirdNumber;
    std::cout << "Podaj liczbę \n";
    std::cin >> thirdNumber;
    std::cout << "LIczby w kolejnosci rosnacej:\n";

    if (thirdNumber < firstNumber && thirdNumber  < secondNumber)
    {
        std::cout << thirdNumber << ", ";
        if(firstNumber > secondNumber)
            std::cout  << secondNumber << "," << firstNumber;
        else
            std::cout << firstNumber  << "," << secondNumber;

     }
    else
    {
        if (secondNumber < firstNumber)
        {
            std::cout << secondNumber << ",";
            if (thirdNumber < firstNumber)
                std::cout << thirdNumber << ", " << firstNumber;
            else
                std::cout << firstNumber << ", " << thirdNumber;
        }
        else
        {
            std::cout << firstNumber << ", ";
            if (thirdNumber < secondNumber)
                std::cout << thirdNumber << ", " << secondNumber;
            else
                std::cout << secondNumber << ", " << thirdNumber;

        }
    }
}

//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe.Wyświetl odpowiedni komunikat.
void task6()
{
    int firstNumber;
    std::cout << "Podaj liczbe";
    std::cin >> firstNumber;
    int secondNumber;
    std::cout << "Podaj liczbe";
    std::cin >> secondNumber;

    if (secondNumber == firstNumber)
        std::cout << "LIczby są równe";
    else
        std::cout << "LIczby nie są równe";
}
//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona parzysta.Wyświetl odpowiedni komunikat.
void task7()
{
    int firstNumber;
    std::cout << "Podaj liczbe";
    std::cin >> firstNumber;
    int rest = firstNumber % 2;
    if (rest == 0)
        std::cout << "LIczba jest parzysta\n";
    else
        std::cout << "Liczba jest nieparzysta";
}

//Napisz program, który poprosi użytkownika o podanie liczby całkowitej
//  i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.
void task8() 
{
    int firstNumber;
    std::cout << "Podaj liczbe";
    std::cin >> firstNumber;
    if (firstNumber / 15)
        std::cout << "LIczba jest podzielna przez 3 i 5";
    else
        std::cout << "LIczba nie jest podzielna przez 3 i 5";


    
}
/*
Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
BMI = masa / wzrost ^ 2
poniżej 16 - wygłodzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagę
18.5 - 24.99 - wagę prawidłową
25.0 - 29.9 - nadwagę
30.0 - 34.99 - I stopień otyłości
35.0 - 39.99 - II stopień otyłości
powyżej 40.0 - otyłość skrajną
*/
 void task9()
{
    float bodyWeight;
    std::cout << "Podaj wagę w kilogramach ";
    std::cin >> bodyWeight;
    float bodyHeight;
    std::cout << "Podaj wzrost w centymetrach ";
    std::cin >> bodyHeight;

   float bmi = bodyWeight / (bodyHeight * bodyHeight );
    if (bmi < 16)
        std::cout << "jestes wygłodzony";
    else if (bmi >= 16 && bmi <= 16.99)
        std::cout << "jestes wychudzony";

    else if (bmi >= 17 && bmi <= 18.49)
        std::cout << "masz niedowagę";

    else if (bmi >= 18.5 && bmi <= 24.99)
        std::cout << "masz wage prawidłową";

    else if (bmi >= 25.0 && bmi <= 29.9)
        std::cout << "masz nadwagę";

    else if (bmi >= 30.0 && bmi <= 34.99)
        std::cout << "masz 1 stopień otyłości ";

    else if (bmi >= 35.0 && bmi <= 39.99)
        std::cout << "masz 2 stopień otyłości";

    else if (bmi < 40)
        std::cout << "masz 3 stopień otyłości ";

}
//Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
 void task10()
 {
     int  daysOfTheWeek;
     std::cout << "Napisz liczbę od 1 do 7";
     std::cin >> daysOfTheWeek;
     if (daysOfTheWeek == 1)
         std::cout << "Jest POniedziałek";
     else if (daysOfTheWeek == 2)
         std::cout << "Jest  Wtorek ";
     else if (daysOfTheWeek == 3)
         std::cout << "Jest  Środa ";
     else if (daysOfTheWeek == 4)
         std::cout << "Jest  Czwartek ";
     else if (daysOfTheWeek == 5)
         std::cout << "Jest  Piątek ";
     else if (daysOfTheWeek == 6)
         std::cout << "Jest  Sobota ";
     else if (daysOfTheWeek == 7)
         std::cout << "Jest  NIedziela ";

     switch (daysOfTheWeek)
     {
     case 1:
         std::cout << "Jest POniedziałek";
         break;


     case 2:
         std::cout << "Jest wtorek";
         break;


     case 3:
         std::cout << "Jest Środa";
         break;


     case 4:
         std::cout << "Jest Czwartek";
         break;


     case 5:
         std::cout << "Jest Piątek";
         break;


     case 6:
         std::cout << "Jest Sobota";
         break;


     case 7:
         std::cout << "Jest niedziela";
         break;
     }
 }


//Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.

void task11()
{
    int  Mounth;
    std::cout << "Napisz liczbę od 1 do 12";
    std::cin >> Mounth;
    if( Mounth == 1 )
        std::cout << "Jest Styczeń";
    else if (Mounth == 2)
        std::cout << "Jest  Luty ";
    else if (Mounth == 3)
        std::cout << "Jest  Marzec ";
    else if (Mounth == 4)
        std::cout << "Jest  Kwiecień ";
    else if (Mounth == 5)
        std::cout << "Jest  Maj ";
    else if (Mounth == 6)
        std::cout << "Jest  Czerwiec ";
    else if (Mounth == 7)
        std::cout << "Jest  Listopad ";
    else if (Mounth == 8)
        std::cout << "Jest  Sierpień ";
    else if (Mounth == 9)
        std::cout << "Jest  Wrzesień ";
    else if (Mounth == 10)
        std::cout << "Jest  Pażdziernik ";
    else if (Mounth == 11)
        std::cout << "Jest  Listopad ";
    else if (Mounth == 12)
        std::cout << "Jest  grudzien ";
}
//Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny.Wyświetl odpowiedni komunikat.
void task12()
{
    int year;
    std::cout << "Podaj rok";
    std::cin >> year;
    int leapYear = year / 4;

    if (year == leapYear)
        std::cout << "Rok jest przestępny ";
    else
        std::cout << "rok nie jest przestępny";
}
//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną.Wyświetl wynik.
 
void task13()
{
        int number;
        std::cout << "podaj liczbę całkowita\n";
        std::cin >> number;

        int wartosc_bezwzgledna;

        if (number  < 0) {
            wartosc_bezwzgledna = -number;
        }
        else {
            wartosc_bezwzgledna = number;
        }
}

//Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia.Wyświetl odpowiedni komunikat.
    void  task14()
{
        int age;
        std::cout << "POdaj swój wiek ";
        std::cin >> age;

        if (age >= 18)
            std::cout << "JEstes pełnoletni ";
        else
            std::cout << "NIe jstes połnoletni";


}
    //Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt.Wyświetl odpowiedni komunikat.

    void task15()
    {
            int firstSideOfTheTriangle;
            std::cout << "POdaj bok trójkąta";
            std::cin >>  firstSideOfTheTriangle;

            int secondSideOfTheTriangle;
            std::cout << "POdaj bok trójkąta";
            std::cin >> secondSideOfTheTriangle;

            int thirdSideOfTheTriangle;
            std::cout << "POdaj bok trójkąta";
            std::cin >>  thirdSideOfTheTriangle;
             
            if (firstSideOfTheTriangle > secondSideOfTheTriangle && thirdSideOfTheTriangle < firstSideOfTheTriangle)
                std::cout << "możesz zrobic trójkąt";

            if (firstSideOfTheTriangle > firstSideOfTheTriangle && thirdSideOfTheTriangle)
                std::cout << "  możesz zrobic trójkąt";
            
            if (thirdSideOfTheTriangle > secondSideOfTheTriangle && firstSideOfTheTriangle)

            
                std::cout << "  możesz zrobic trójkąt";
            else
            {
                std::cout << " nie mozesz zrobic trójkoąta";
            }
             

   }

    //Napisz program, który poprosi użytkownika o podanie oceny w skali 100 - punktowej i przeliczy ją na ocenę procentową w przedziale od 0 do 100. Wyświetl wynik.
    void task16()

    {
        int percentage;

        std::cout << "Podaj procent od 0 do 100";
        std::cin >> percentage;

        if (percentage >= 0 && percentage <= 33)
            std::cout << " jest to 1";
        else if (percentage > 33 && percentage <= 44)
            std::cout << "jest to 2";
        else if (percentage > 44 && percentage <= 70)
            std::cout << "jest to 3";
        else if (percentage > 70 && percentage <= 85)
            std::cout << "jest to 4";
        else if (percentage > 85 && percentage <= 99)
            std::cout << "jest to 5";
        else if (percentage == 100)
            std::cout << "jest to 6";
    }
    //Pogram wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)

    void task17()
    {
        int rating;
        std::cout << "Podaj ocene";
            std::cin >> rating;

            if (rating == 6)
                std::cout << "celujácy";
            else if (rating == 5)
                std::cout << "bardzo dobry";
            else if (rating == 4)
                std::cout << "dobry";
            else if (rating == 3)
                std::cout << "dostateczny";
            else if (rating == 2)
                std::cout << "dopuszczajácy ";
            else if (rating == 1)
                std::cout << "niedostateczny";
    }
    //Napisz program, który na podstawie współczynników równania kwadratowego(a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.

    void task18()
    {
    
    
    
    
    
    
    }
   //Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
    void task19()
    {
        int mounth, day, year;
        std::cout << "POdaj dzień";
        std::cin >> day;
        std::cout << "POdaj miesiąc";
        std::cin >> mounth;
        std::cout << "POdaj rok";
        std::cin >> year;

        if (day >= 1 && day <= 31 && mounth >= 1 && mounth <= 12 && year)
            std::cout << "Podałeś dobrą datę";

        void task20()

            int main();
{
    //task1();
    //task2(); 
    //task3();
    //task4();
    //task5();
   // task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11():
    //task12();
    //task13();
    //task13();
    //task14();
    //task15();
    //task16();
    //task17();
    //task18();
    //task19();
    //task20();
}

