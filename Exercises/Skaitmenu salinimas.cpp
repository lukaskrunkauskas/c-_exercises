//Parašykite programą, kuri iš duoto natūrinio skaičiaus n užrašo pašalintų visus 1 ir 5. Skaitmenų eiliškumo nekeiskite. Pavyzdžiui, iš skaičiaus 527012 gautųsi skaičius 2702.
//
//Draudžiama naudoti simbolių eilutes.
//Išveskite gautą skaičių (be nereikšminių nulių). Tuo atveju, kai reikės pašalinti visus skaičiaus n skaitmenis, išveskite 0.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n, proc_dalyba = 10, lin_dalyba = 1, temp, while_n;
    bool check_if_0 = false;
    vector<long long> sujungt_skaicius;
    cin >> n;
    temp = n;
    while_n = n;
    while (while_n > 0) {

        temp = n % proc_dalyba / lin_dalyba;
        proc_dalyba *= 10;
        lin_dalyba *= 10;
        if (temp != 1 && temp != 5)
            sujungt_skaicius.push_back(temp);
        while_n /= 10;
    }

    for (int i = sujungt_skaicius.size() - 1; i >= 0; i--) {
        if (sujungt_skaicius[i] != 0) check_if_0 = true;
        if (check_if_0 == true) cout << sujungt_skaicius[i];
    }
    if (check_if_0 == false) cout << check_if_0;
}
