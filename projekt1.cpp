#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Oblicz silnie" << endl;
        cout << "2. Sprawdz czy liczba jest pierwsza" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            cout << "Silnia z " << a << " wynosi " << factorial(a) << endl;
        } else if (wyjscie == 2) {
            if (isPrime(a)) {
                cout << a << " jest liczba pierwsza" << endl;
            } else {
                cout << a << " nie jest liczba pierwsza" << endl;
            }
        }

    } while(wyjscie != 0);
    return 0;
}
