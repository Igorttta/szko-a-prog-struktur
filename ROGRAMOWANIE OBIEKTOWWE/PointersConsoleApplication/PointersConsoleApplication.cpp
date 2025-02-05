//

#include <iostream>




int main()
{
	int firstvar = 5;
	int Secoundvar = 5;

	std::cout << "firstvar" << firstvar;
	std::cout << "Adres zmiennej firstvar" << (&firstvar);
	std::cout << "Secoundvar" << Secoundvar;
	std::cout << "Adres zmiennej Secoundvar" << (&Secoundvar);

	int *ptr = &firstvar;
	std::cout << "ptr = " << ptr;
	std::cout << "*ptr = " << *ptr;
	* ptr = 99;
	std::cout << "firstVar" << firstvar;

	bool thirdvar = true;
	bool* boolPtr;

	int tab[3] = { 2 , 98 , 4 };
	std::cout << "tab[0] = " << tab[0];
	std::cout << "tab[0] = " << tab[0];
	std::cout << "tab[0] = " << tab[0];
	std::cout << "tab[1] = " << tab[1];
	std::cout << "tab[1] = " << tab[1];
	std::cout << "tab[2] = " << tab[2];
	std::cout << "tab[2] = " << tab[2];

	std::cout << "Zawartoœæ tablicy ";
	for (int i = 0  ; i < 3 ; i++)
	{
		std::cout << i << ";" << tab[i];
		std::cout << i << ";" << (tab + i );
	}
}

