

#include <iostream>
void task1()
{
	float lenghtOfRectangleBaseB;
	std::cout << "Podaj d³ugosc podstawy prostokata B \n";
	std::cin >> lenghtOfRectangleBaseB;
	float lenghtOfRectangleBaseA;
	std::cout << "Podaj d³ugosc podstawy prostokata A \n";
	std::cin >> lenghtOfRectangleBaseA;
	float  areaOfRectang = lenghtOfRectangleBaseA * lenghtOfRectangleBaseB;
	std::cout << "Pole prostokata wynosi\n" << areaOfRectang;
}
int main()
{
task1();
}

