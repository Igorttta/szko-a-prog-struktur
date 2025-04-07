

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;



int main(){
    /*
    ifstream inputFile("Liczby.txt"); 
    

    if (!inputFile) { 
        cerr << "Failed to open input file." << endl;
        return 1;  

    if (!outputFile) {  
        cerr << "Failed to open output file." << endl;
        return 1;  
    }

    int number;
    while (inputFile >> number) {
        int reversed = reverseNumber(number);
        if (reversed % 17 == 0) {
            cout << reversed << endl;      
            outputFile << reversed << endl; 
        }
    }

    inputFile.close();
    outputFile.close();
    return 0;
    */
    std::ifstream file("przyklad.txt");

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

	std::cout << "Zadanie 4.1\n";
	int counter = 0;
	for (int num : numbers) 
	{
		int firstDigit;
		int lastDigit = num % 10;
		int tmpNum = num;
		do
		{
			firstDigit = tmpNum % 10;
			tmpNum = tmpNum / 10;

		} while (tmpNum != lastDigit);

		if (firstDigit == lastDigit)
		{
			counter++;
		}
	}

        int reversed = 0;
        while (counter > 0) {
            reversed = reversed * 10 + counter % 10;
            counter /= 10;
        }
        return reversed;
        //odbicie liczb i potem wartosc bezgednia z niej 

        
        if (n > 0)
        {
            std::cout <<  n;
        }
        if (n < 0)
        {
            n = n * -1;

        }
}
