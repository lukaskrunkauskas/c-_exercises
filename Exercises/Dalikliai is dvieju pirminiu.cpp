//Surasti natūrinius skaičius iš atkarpos [n, k], tokius, kurių daliklių kiekis yra lygus dviejų pirminių skaičių sandaugai. (Pavyzdžiui, skaičius 20 turi 6 daliklius: 1, 2, 4, 5, 10, 20. Savo ruožtu 6 = 2∙3, t.y. dviejų pirminių skaičių sandauga.)
//Išveskite surastus skaičius per tarpą didėjimo tvarka. Jeigu duotame intervale ieškomų skaičių nėra, išveskite 0.
#include <iostream>
#include <vector>
#include <set>
#include <iomanip>
#include <math.h>

using namespace std;

int countDivisors(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;

            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main() {
    int test, l, r, funk_reiksme;
    int A[] = {2, 3, 5, 7, 11, 13, 17, 19};
    vector<int> sandaugos;
    vector<int> ats;
    cin >> l >> r;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            test = A[i] * A[j];
            sandaugos.push_back(test);
        }


    for (int i = l; i <= r; i++) {
        funk_reiksme = countDivisors(i);
        for (int j = 0; j < sandaugos.size(); j++) {
            if (funk_reiksme == sandaugos[j]) {
                ats.push_back(i);
                break;
            }
        }
    }
    if (ats.empty()) {
        cout << 0;
        return 0;
    }
    cout << ats[0];
    for (int i = 1; i < ats.size(); i++)
        cout << " " << ats[i];
}

