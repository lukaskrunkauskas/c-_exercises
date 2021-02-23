//Duoti du natūriniai skaičiai p ir q. Surasti visus skaičiaus p daliklius, kurie yra tarpusavyje pirminiai su q. Du skaičiai vadinami tarpusavyje pirminiais, jeigu jų didžiausias bendras daliklis yra 1.
//Išveskite surastus daliklius per tarpą didėjimo tvarka. Jeigu sąlygą atitinkančių daliklių nėra, išveskite 0.
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

vector<int> getDivisors(int n) {
    vector<int> p_divisors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                p_divisors.push_back(i);

            else {
                p_divisors.push_back(i);
                p_divisors.push_back(n / i);
            }
        }
    }
    return p_divisors;
}

int main() {
    long long n, a, b, dbd, p, q;
    cin >> p >> q;
    vector<long long> skaitmenys;

    for (int i = 0; i < getDivisors(p).size(); i++) {
        a = getDivisors(p)[i];
        b = q;
        while (abs(a) && abs(b)) {
            if (abs(a) > abs(b)) a %= b;
            else b %= a;
        }
        dbd = a + b;
        if (dbd == 1) skaitmenys.push_back(getDivisors(p)[i]);
    }
    sort(skaitmenys.begin(), skaitmenys.end());
    cout << skaitmenys[0];
    for (int i = 1; i < skaitmenys.size(); i++)
        cout << " " << skaitmenys[i];

}
