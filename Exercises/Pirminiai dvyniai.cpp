//Duotas natūrinis skaičius n. Išsiaiškinti, ar tarp skaičių n, n+1, ... , 2n yra skaičiai-dvyniai, t.y. pirminiai skaičiai kurių skirtumas yra 2.
//Išveskite YES, jeigu skaičiai-dvyniai yra tarp duotų skaičių, ir NO – jeigu skaičių dvynių nėra.
#include <iostream>
#include <vector>

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
    int n, old_prime = 0, new_prime = 0;
    bool ans = false;
    vector<int> masyvas;
    cin >> n;
    masyvas.resize(n);
    if (n == 1) {
        cout << "NO";
        return 0;
    }
    old_prime = n;
    for (int i = n; i < n * 2 + 1; i++) {
        if (isPrime(i) == true) {
            new_prime = i;
            if (new_prime - old_prime == 2) {
                ans = true;
                break;
            }
            old_prime = i;
        }
    }


    if (ans == true) cout << "YES";
    else cout << "NO";
}

