//Raskite didžiausią bendrą dviejų skaičių daliklį.
//Kiekvienai porai (x, y)(x,y) atskiroje eilutėje atspausdinkite skaičių xx ir yy DBD.
#include <iostream>

using namespace std;

int main() {
    long long dbd, n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        while (abs(a) && abs(b))
            if (abs(a) > abs(b)) a %= b;
            else b %= a;
        dbd = a + b;
        cout << dbd << endl;
    }
}

