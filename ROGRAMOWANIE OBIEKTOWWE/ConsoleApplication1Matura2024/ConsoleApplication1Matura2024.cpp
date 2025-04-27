#include <iostream>
using namespace std;

int nieparzystySkrot(int n) {
    int wynik = 0, mnoznik = 1;
    while (n > 0) {
        int cyfra = n % 10;
        if (cyfra % 2 != 0) {
            wynik = wynik + cyfra * mnoznik;
            mnoznik *= 10;
        }
        n = n / 10;
    }
    return wynik;
}
//zad2
bool brakNieparzystych(int n) {
    while (n > 0) {
        int cyfra = n % 10;
        if (cyfra % 2 != 0) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Nieparzysty skrot: " << nieparzystySkrot(liczba) << endl;
    return 0;
  //zad2
    ifstream wejscie("skrot.txt");
    ofstream wyjscie("wyniki3_2.txt");
    int liczba, najwieksza = 0, ile = 0;

    while (wejscie >> liczba) {
        if (brakNieparzystych(liczba)) {
            ile++;
            if (liczba > najwieksza) najwieksza = liczba;
        }
    }

    wyjscie << ile << endl;
    wyjscie << najwieksza << endl;

    wejscie.close();
    wyjscie.close();
    return 0;
}
