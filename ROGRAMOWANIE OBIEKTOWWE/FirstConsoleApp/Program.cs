Console.Write("Hello, World!");
Console.WriteLine("Hello, World!");
string name = "JAn";
string surname = "KAmil";
Console.WriteLine("Witaj" + name + surname);
Console.Write("Predkosc w km\\h");
Console.Write(@"Predkosc w km\h" );

int firstNumber = 5;
int secoundNumber = firstNumber;
 secoundNumber = 6;
Console.Write($"firstNumber = {firstNumber}");
Console.Write($"secoundNumber = {secoundNumber}");

void ParametrTest_v1(int p)
{
    Console.WriteLine("Przed zmiana parametr test_v1");
    p++;
    Console.WriteLine($"Przed zmiana parametr test_v1{p}");
}
firstNumber = 99;
Console.WriteLine($"Przed zmiana parametr test_v1 {firstNumber}");
ParametrTest_v1(firstNumber);
Console.WriteLine($"Po  ParametrTest_v1 {firstNumber}");

