#include <iostream>
#include <fstream>

void task1()
{
    std::string name;
    int age;

    std::cout << "Podaj imie";
    std::cin >> name;

    std::cout << "Podaj wiek";
    std::cin >> age;

    std::ofstream writeInFiles;
    writeInFiles.open("c:\\dane.txt");

    if (writeInFiles.is_open() == true)
    {
        writeInFiles << name;
        writeInFiles << "\n";
        writeInFiles << age;

        writeInFiles.close();
    }


}
int main()
{
    std::cout << "Hello World!\n";
}


