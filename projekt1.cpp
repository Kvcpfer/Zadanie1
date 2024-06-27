#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
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
        cin >> wyjscie;

        if (wyjscie == 1) {
            cout << "Silnia z " << a << " wynosi " << factorial(a) << endl;
        }

    } while(wyjscie != 0);
    return 0;
}
