

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed; 
}

int main() {
    ifstream inputFile("Liczby.txt"); 
    ofstream outputFile("Output.txt"); 

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
}
