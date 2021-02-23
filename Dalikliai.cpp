//Duotas sveikas skaičius N, surasti visus jo daliklius. Daliklius pateikti per tarpą didėjimo tvarka.
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<long long> masyvas;
    long long n, num;

    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            num = n / i;
            if (num != i) {
                masyvas.push_back(num);
                masyvas.push_back(i);
            } else masyvas.push_back(i);
        }
    }
    sort(masyvas.begin(), masyvas.end());

    cout << masyvas[0];
    for (int i = 1; i < masyvas.size(); i++) {
        cout << " " << masyvas[i];
    }
    return 0;
}