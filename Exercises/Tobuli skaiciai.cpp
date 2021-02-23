//Tobulu vadinsime skaičių, kuris yra lygus visų savo daliklių sumai, išskyrus pačio skaičiaus. Duotas sveikas skaičius N, patikrinti, ar jis yra tobulas.
//
//Pvz., 8 – netobulas (1+2+4 != 8), 6 – tobulas (1+2+3 = 6).
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<long long> masyvas;
    long long n, num, sum = 0;

    cin >> n;
    if (n == 0) cout << "NE";
    else {
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
        for (int i = 0; i < masyvas.size() - 1; i++) {
            sum = masyvas[i] + sum;
        }
        if (sum == n) cout << "TAIP";
        else cout << "NE";

    }
    return 0;
}

