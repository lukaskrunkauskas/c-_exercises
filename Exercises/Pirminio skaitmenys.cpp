//Intervale [n, m] surasti visus pirminius skaičius, kurie turi tokią savybę: pirmo ir antro skaitmenų suma yra lygi trečio ir ketvirto skaitmenų sumai. Pavyzdžiui, tokią savybę turi skaičius 1423.
//Išveskite surastus pirminius skaičius vienoje eilutėje per tarpus. Jeigu duotame intervale nėra nei vieno sąlygą atitinkančio skaičiaus – išveskite 0.
#include <iostream>

using namespace std;

bool isPrime(int n) {

    if (n <= 1)
        return false;


    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    int n, m, a = 0, b = 0, c = 0, d = 0, skaic = 0;
    int A[100];
    cin >> n >> m;
    if (n < 1000) n = 1000;
    for (int i = n; i < m + 1; i++) {

        d = i % 10;
        c = (i % 100 - d) / 10;
        b = (i % 1000 - d - c) / 100;
        a = i / 1000;

        if (a + b == c + d)
            if (isPrime(i)) {
                A[skaic] = i;
                skaic++;
            }

    }
    if (skaic == 0) {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < skaic - 1; i++)
        cout << A[i] << " ";
    cout << A[skaic - 1];

}

