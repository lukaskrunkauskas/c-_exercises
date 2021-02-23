//Skaičius kuris turi vienodą reikšmę skaitant iš kairės į dešinę ir iš dešinės į kairę, vadinamas palindromu.
//
//Pavyzdžiui, 12344321. Duotas natūrinis skaičius n, nustatyti, ar šis skaičius yra palindromas.
//
//Draudžiama naudoti simbolių eilutes.
//Išveskite TAIP, jeigu duotas skaičius yra palindromas ir NE – kitu atveju.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n, proc_dalyba = 10, lin_dalyba = 1, temp, while_n, j = 0;
    bool check_if = false;
    vector<long long> sujungt_skaicius;
    cin >> n;
    temp = n;
    while_n = n;
    while (while_n > 0) {

        temp = n % proc_dalyba / lin_dalyba;
        proc_dalyba *= 10;
        lin_dalyba *= 10;

        sujungt_skaicius.push_back(temp);
        while_n /= 10;
    }

    for (int i = sujungt_skaicius.size() - 1; i >= 0; i--) {
        if (sujungt_skaicius[i] != sujungt_skaicius[j]) check_if = true;

        j++;
    }
    if (check_if == true) cout << "NE";
    else cout << "TAIP";
}

