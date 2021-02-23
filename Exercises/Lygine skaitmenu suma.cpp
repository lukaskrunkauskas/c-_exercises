//Duotas natūrinis skaičius n. Nustatyti, ar tiesa, kad šio skaičiaus skaitmenų suma yra nelyginis skaičius.
//jeigu sąlygos teiginys yra tiesa – išveskite YES; jeigu sąlygos teiginys yra netiesa – išveskite NO.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, proc_dalyba = 10, lin_dalyba = 1, temp, while_n, sum = 0;
    bool check_if_0 = false;
    vector<long long> sujungt_skaicius;
    cin >> n;
    temp = n;
    while_n = n;
    while (while_n > 0) {

        temp = n % proc_dalyba / lin_dalyba;
        proc_dalyba *= 10;
        lin_dalyba *= 10;
        sum = sum + temp;
        while_n /= 10;
    }
    if (sum % 2 == 0) cout << "NO";
    else cout << "YES";
}

