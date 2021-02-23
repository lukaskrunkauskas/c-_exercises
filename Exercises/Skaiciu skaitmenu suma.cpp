//Parašykite programą, kuri skaičiuoja visų sveikų skaičių nuo 1 iki n skaitmenų sumą s.
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

long long sumOfDigitsFrom1ToN(long long n) {
    if (n<10)
        return n*(n+1)/2;
    long long d = log10(n);
    long long *a = new long long[d+1];
    a[0] = 0, a[1] = 45;
    for (int i=2; i<=d; i++)
        a[i] = a[i-1]*10 + 45*ceil(pow(10,i-1));
    long long p = ceil(pow(10, d));
    long long msd = n/p;
    return msd*a[d] + (msd*(msd-1)/2)*p +
           msd*(1+n%p) + sumOfDigitsFrom1ToN(n%p);
}
int main() {
    unsigned long long n;
    cin >> n;
    cout <<sumOfDigitsFrom1ToN(n);
}

