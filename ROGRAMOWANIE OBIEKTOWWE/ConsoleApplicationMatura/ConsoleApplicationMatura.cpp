

#include <iostream>
#include <vector>
#include <fstream>

int main()
{
	std::ifstream file(przyk³ad.txt)
	std::vector<int> numbers;

	int n;
	while (file >> n)
	{
		numbers.push_back(n);
	}
	std::cout << "liczby\n";
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i];
	}
}

