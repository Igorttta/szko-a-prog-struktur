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
        writeInFiles.flush();
        writeInFiles << age;

        writeInFiles.close();
    }


}
void task2()
{
    std::string name;
    int age;
    std::ifstream readFromFiles;
    readFromFiles.open("c:\\dane.txt");

    if (readFromFiles.is_open() == true)
    {
        readFromFiles >> name;
        readFromFiles >> age;

        std::cout << "Imie " << name << "Wiek" << age;
        readFromFiles.close();
    }


}

int main()
{
    task2();
}


