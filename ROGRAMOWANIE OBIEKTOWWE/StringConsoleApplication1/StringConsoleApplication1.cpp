// StringConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string text;
    text = "Ala ma kota";
    std::cout << "Tekst na pocz¹rtku " << text << "\n";
    size_t len = text.length();                                
        std::cout << "D³ugosæ" << len << "\n";
        std::string sub = text.substr(4, 2);
        std::cout << "pOD£ANCUCH " << sub << "\n";

        text.replace(0, 3 ,"Ola");                            
        std::cout << "tekst po zmnaine " << text << "\n";
        text.insert(3, "nie");
        std::cout << "Tekst po zmianie " << text;
}

