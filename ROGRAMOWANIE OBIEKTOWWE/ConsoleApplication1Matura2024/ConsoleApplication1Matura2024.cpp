#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//  ZADANIE 2 
int oddShortcut(long long n) {
    int b = 1, c = 0;
    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        if (digit % 2 == 0) c += b * (digit / 2);
        else c += b;
        b *= 10;
    }
    return c;
}

//  ZADANIE 3 
bool hasOnlyEvenDigits(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) return false;
        n /= 10;
    }
    return true;
}

int shortcutOddDigits(int n) {
    int result = 0, multiplier = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        n /= 10;
    }
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

//    ZADANIA 4 
bool canBeBuiltFrom(int number, const int firstRow[], int size) {
    int available[3000];
    for (int i = 0; i < size; i++) {
        available[i] = 1;
    }

    for (int i = 0; i < size; i++) {
        while (number % firstRow[i] == 0) {
            number /= firstRow[i];
            available[i]--;
            if (available[i] < 0) return false;
        }
    }
    return number == 1;
}

void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//  ZADANIE 7 
void zadanie7() {
    ifstream jablka("jablka.txt");
    ifstream cennik("cennik.txt");
    if (!jablka.is_open() || !cennik.is_open()) {
        cout << "Blad otwarcia plikow." << endl;
        return;
    }

    vector<string> odmiany;
    vector<double> ceny;
    string odm;
    double cena;
    while (cennik >> odm >> cena) {
        odmiany.push_back(odm);
        ceny.push_back(cena);
    }

    vector<string> daty, odmianyZ, nipy;
    vector<int> kg;
    string data, odmiana, kod, nip;
    int ilosc;

    while (jablka >> data >> odmiana >> kod >> nip >> ilosc) {
        daty.push_back(data);
        odmianyZ.push_back(odmiana);
        nipy.push_back(nip);
        kg.push_back(ilosc);
    }

    // ZADANIE 7.1
    vector<string> nipList;
    vector<int> zimoweKg;
    for (int i = 0; i < nipy.size(); i++) {
        if (kod == "Z") {
            bool found = false;
            for (int j = 0; j < nipList.size(); j++) {
                if (nipy[i] == nipList[j]) {
                    zimoweKg[j] += kg[i];
                    found = true;
                    break;
                }
            }
            if (!found) {
                nipList.push_back(nipy[i]);
                zimoweKg.push_back(kg[i]);
            }
        }
    }

    cout << " ZADANIE 7.1 " << endl;
    for (int i = 0; i < 3; i++) {
        int maxIdx = 0;
        for (int j = 1; j < zimoweKg.size(); j++) {
            if (zimoweKg[j] > zimoweKg[maxIdx]) maxIdx = j;
        }
        cout << "NIP: " << nipList[maxIdx] << ", kilogramy: " << zimoweKg[maxIdx] << endl;
        zimoweKg[maxIdx] = -1;
    }

    // ZADANIE 7.2
    double totalIncome = 0.0;
    vector<string> odmUzyte;
    vector<double> przychody;

    for (int i = 0; i < odmianyZ.size(); i++) {
        for (int j = 0; j < odmiany.size(); j++) {
            if (odmiany[j] == odmianyZ[i]) {
                double income = ceny[j] * kg[i];
                totalIncome += income;
                bool found = false;
                for (int k = 0; k < odmUzyte.size(); k++) {
                    if (odmUzyte[k] == odmianyZ[i]) {
                        przychody[k] += income;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    odmUzyte.push_back(odmianyZ[i]);
                    przychody.push_back(income);
                }
                break;
            }
        }
    }

    cout << "\nZADANIE 7.2" << endl;
    cout << "Calkowity przychod: " << totalIncome << " zl" << endl;
    double maxPrzychod = 0;
    string maxOdmiana;
    for (int i = 0; i < przychody.size(); i++) {
        if (przychody[i] > maxPrzychod) {
            maxPrzychod = przychody[i];
            maxOdmiana = odmUzyte[i];
        }
    }
    cout << "Najwiekszy przychod: " << maxPrzychod << " zl z odmiany: " << maxOdmiana << endl;

    // ZADANIE 7.4
    vector<string> klienci;
    vector<int> sumaKg;
    int liczbaTransakcjiZRabatem = 0;
    double sumaRabatu = 0.0;
    for (int i = 0; i < nipy.size(); i++) {
        int idx = -1;
        for (int j = 0; j < klienci.size(); j++) {
            if (klienci[j] == nipy[i]) {
                idx = j;
                break;
            }
        }
        if (idx == -1) {
            klienci.push_back(nipy[i]);
            sumaKg.push_back(kg[i]);
            idx = klienci.size() - 1;
        }
        else {
            sumaKg[idx] += kg[i];
        }

        if (sumaKg[idx] >= 15000 && sumaKg[idx] < 20000) {
            liczbaTransakcjiZRabatem++;
            sumaRabatu += 0.05 * kg[i];
        }
        else if (sumaKg[idx] >= 20000) {
            liczbaTransakcjiZRabatem++;
            sumaRabatu += 0.10 * kg[i];
        }
    }
    cout << "\nZADANIE 7.4 " << endl;
    cout << "Liczba transakcji z rabatem: " << liczbaTransakcjiZRabatem << endl;
    cout << "Suma rabatow: " << sumaRabatu << " zl" << endl;
}


int main() {
    cout << "\nZADANIE 3.1";
    int number;
    cout << "Podaj liczbe: ";
    cin >> number;
    cout << "Skrocone nieparzyste cyfry: " << shortcutOddDigits(number) << endl;

    ifstream file1("skrot.txt");
    if (!file1.is_open()) {
        cout << "Blad otwarcia pliku skrot.txt" << endl;
        return 1;
    }
    int count = 0, maxEven = 0, value;
    while (file1 >> value) {
        if (hasOnlyEvenDigits(value)) {
            count++;
            if (value > maxEven) maxEven = value;
        }
    }
    file1.close();
    cout << "\nZADANIE 3.2";
    cout << "Liczba liczb zlozonych wylacznie z parzystych cyfr: " << count << endl;
    cout << "Najwieksza liczba z samych parzystych cyfr: " << maxEven << endl;

    ifstream file2("skrot2.txt");
    if (!file2.is_open()) {
        cout << "Blad otwarcia pliku skrot2.txt" << endl;
        return 1;
    }
    cout << "\nZADANIE 3.3";
    cout << "Liczby, dla których NWD (oryginal, skrot) = 7:" << endl;
    int number2;
    while (file2 >> number2) {
        int shortNum = shortcutOddDigits(number2);
        if (gcd(number2, shortNum) == 7) {
            cout << number2 << endl;
        }
    }
    file2.close();

    ifstream file3("liczby.txt");
    if (!file3.is_open()) {
        cout << "B³¹d otwarcia pliku liczby.txt" << endl;
        return 1;
    }

    int row1[3000], row2[20];
    for (int i = 0; i < 3000; i++) file3 >> row1[i];
    for (int i = 0; i < 20; i++) file3 >> row2[i];
    file3.close();

    int divisibleCount = 0;
    for (int i = 0; i < 3000; i++) {
        for (int j = 0; j < 20; j++) {
            if (row2[j] % row1[i] == 0) {
                divisibleCount++;
                break;
            }
        }
    }
    cout << "\nZADANIE 4.1 " << endl;
    cout << "Liczba liczb dzielacych sie na co najmniej jedna z 20: " << divisibleCount << endl;

    int copy[3000];
    for (int i = 0; i < 3000; i++) copy[i] = row1[i];
    sortDescending(copy, 3000);
    cout << "\n ZADANIE 4.2 " << endl;
    cout << "101. najwieksza liczba: " << copy[100] << endl;

    cout << "\n ZADANIE 4.3 " << endl;
    cout << "Liczby, ktore mozna zbudowac z liczb pierwszego wiersza:" << endl;
    for (int i = 0; i < 20; i++) {
        if (canBeBuiltFrom(row2[i], row1, 3000)) {
            cout << row2[i] << " ";
        }
    }
    cout << endl;

    double bestAvg = 0.0;
    int bestLen = 0, firstElem = 0;
    for (int i = 0; i < 3000; i++) {
        int sum = 0;
        for (int j = i; j < 3000; j++) {
            sum += row1[j];
            int len = j - i + 1;
            if (len >= 50) {
                double avg = (double)sum / len;
                if (avg > bestAvg) {
                    bestAvg = avg;
                    bestLen = len;
                    firstElem = row1[i];
                }
            }
        }
    }
    cout << "\n ZADANIE 4.4 " << endl;
    cout << "Najlepsza srednia: " << bestAvg << endl;
    cout << "Dlugosc ci¹gu: " << bestLen << endl;
    cout << "Pierwszy element ciagu: " << firstElem << endl;

    zadanie7();

    return 0;
}
