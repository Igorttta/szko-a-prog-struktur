#include <iostream>
#include <fstream>
#include <vector>

int main()
{
	std::ifstream file("temperatury.txt");

	/*
	int numbers[200];

	for (int i = 0; i < 200; i++)
	{
		file >> numbers[i];
	}*/

	std::vector<int> numbers;

	int n;
	while (file >> n)
	{
		numbers.push_back(n);
	}
	std::cout << "Odczytane liczby:\n";
	for (int num : numbers)
	{
		std::cout << num << ", ";
	}
	std::cout << "\n";
	if
