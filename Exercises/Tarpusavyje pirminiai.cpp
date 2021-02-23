//Duotas natūrinis skaičius n. Gauti visus skaičius, kurie:
//
//1. yra mažesni už n;
//
//2. yra tarpusavyje pirminiai su n.
//
//Du skaičiai vadinami tarpusavyje pirminiais, jeigu jų didžiausias bendras daliklis yra 1.
//Išvestis: Išveskite surastus skaičius per tarpą didėjimo tvarka. Jeigu duotame intervale ieškomų skaičių nėra, išveskite 0.
#include <iostream>
#include <vector>


using namespace std;

int main() {
    long long n, a, b, dbd;
    cin >> n;
    vector<long long> skaitmenys;
    for (int i = 0; i < n; i++) {
        a = i;
        b = n;
        while (abs(a) && abs(b)) {
            if (abs(a) > abs(b)) a %= b;
            else b %= a;
        }
        dbd = a + b;
        if (dbd == 1) skaitmenys.push_back(i);
    }
    if (skaitmenys.empty()) cout << 0;
    else
        for (int i = 0; i < skaitmenys.size(); i++)
            if (i != skaitmenys.size() - 1) cout << skaitmenys[i] << " ";
            else cout << skaitmenys[i];
}
