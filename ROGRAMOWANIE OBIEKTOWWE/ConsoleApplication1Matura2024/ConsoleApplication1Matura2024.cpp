#include <iostream>
#include <fstream>
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
        int cyfra1 = n % 10;
        if (cyfra1 % 2 != 0) return false;
        n /= 10;
    }
    return true;
}
//zad3
int nieparzystySkrot1(int n) {
    int wynik = 0, mnoznik = 1;
    while (n > 0) {
        int cyfra2 = n % 10;
        if (cyfra2 % 2 != 0) {
            wynik += cyfra2 * mnoznik;
            mnoznik *= 10;
        }
        n /= 10;
    }
    return wynik;
}

int nwd(int a, int b) {
    while (b != 0) {
        int pom = a % b;
        a = b;
        b = pom;
    }
    return a;
}
bool daSieRozlozyc(int liczba, const int pierwsze[], int rozmiar) {
    int dostepne[3000];
    for (int i = 0; i < rozmiar; i++) {
        dostepne[i] = 1; 
    }

    for (int i = 0; i < rozmiar; i++) {
        while (liczba % pierwsze[i] == 0) {
            liczba /= pierwsze[i];
            dostepne[i]--;
            if (dostepne[i] < 0) return false;
        }
    }
    return liczba == 1;
}

void sortowanieMalejaco(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar - 1; i++) {
        for (int j = 0; j < rozmiar - 1 - i; j++) {
            if (tablica[j] < tablica[j + 1]) {
                int temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Nieparzysty skrot: " << nieparzystySkrot(liczba) << endl;

  //zad2 
    cout << "zad2";
    ifstream wejscie("skrot.txt");
    if (!wejscie.is_open()) {
        cout << "Blad otwarcia pliku skrot.txt" << endl;
        return 1;
    }

    int liczba1, najwieksza = 0, ile = 0;
    while (wejscie >> liczba1) {
        if (brakNieparzystych(liczba1)) {
            ile++;
            if (liczba1 > najwieksza) najwieksza = liczba1;
        }
    }

    cout << "Liczba liczb bez nieparzystych cyfr: " << ile << endl;
    cout << "Najwieksza taka liczba: " << najwieksza << endl;

    wejscie.close();
   
    //zad3
    ifstream wejscie1("skrot2.txt");
    if (!wejscie1.is_open()) {
        cout << "Blad otwarcia pliku skrot2.txt" << endl;
        return 1;
    }

    int liczba2;
    cout << "Liczby, dla których NWD liczby i nieparzystego skrotu wynosi 7:" << endl;
    while (wejscie >> liczba2) {
        int skrot = nieparzystySkrot(liczba2);
        if (nwd(liczba2, skrot) == 7) {
            cout << liczba2 << endl;
        }
    }

    wejscie.close();
   

    ifstream plik("liczby.txt");
    if (!plik.is_open()) {
        cout << "Blad otwarcia pliku liczby.txt" << endl;
        return 1;
    }

    int pierwsze[3000];
    int drugie[20];

    for (int i = 0; i < 3000; i++) plik >> pierwsze[i];
    for (int i = 0; i < 20; i++) plik >> drugie[i];

    // Zadanie 4.1
    int ileDz = 0;
    for (int i = 0; i < 3000; i++) {
        for (int j = 0; j < 20; j++) {
            if (drugie[j] % pierwsze[i] == 0) {
                ileDz++;
                break;
            }
        }
    }
    cout << "4.1 Liczb z pierwszego wiersza bedacych dzielnikiem: " << ileDz << endl;

    // Zadanie 4.2
    int kopia[3000];
    for (int i = 0; i < 3000; i++) kopia[i] = pierwsze[i];

    sortowanieMalejaco(kopia, 3000); 

    cout << "4.2 101 liczba od najwiekszej to: " << kopia[100] << endl;

    // Zadanie 4.3
    cout << "4.3 Liczby z drugiego wiersza, ktore da sie zapisac jako iloczyn liczb pierwszych:" << endl;
    for (int i = 0; i < 20; i++) {
        if (daSieRozlozyc(drugie[i], pierwsze, 3000)) {
            cout << drugie[i] << " ";
        }
    }
    cout << endl;

    // Zadanie 4.4
    double najlepszaSrednia = 0.0;
    int najlepszaIlosc = 0;
    int pierwszyElement = 0;

    for (int i = 0; i < 3000; i++) {
        int suma = 0;
        for (int j = i; j < 3000; j++) {
            suma += pierwsze[j];
            int ilosc = j - i + 1;
            if (ilosc >= 50) {
                double srednia = (double)suma / ilosc;
                if (srednia > najlepszaSrednia) {
                    najlepszaSrednia = srednia;
                    najlepszaIlosc = ilosc;
                    pierwszyElement = pierwsze[i];
                }
            }
        }
    }

    cout << "4.4 Najlepsza srednia: " << najlepszaSrednia << endl;
    cout << "4.4 Liczba elementow: " << najlepszaIlosc << endl;
    cout << "4.4 Pierwszy element ciagu: " << pierwszyElement << endl;

    plik.close();
    return 0;
}
