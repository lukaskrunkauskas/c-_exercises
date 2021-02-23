//Skaičių intervale [L,R] reikia rasti skaičių, kuris turi daugiausiai pirminių daliklių, o jei tokių skaičių yra daugiau nei vienas, rasti didžiausią.
//
//Skaičių teorijoje teigiamo sveikojo skaičiaus pirminis daliklis yra pirminis skaičius, kuris dalija tą sveikąjį skaičių tiksliai, be liekanos.
//
//Pvz. skaičius 24 turi 4 pirminius daliklius: 2, 2, 2, 3.
//Išveskite skaičių X kuris turi daugiausiai pirminių daliklių ir priklausio intervalui [L,R]. Jei tokių skaičių yra daugiau nei vienas, išvesti didžiausią.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int l, r, temp, sum = 0, did_dal = 0, did_sk = 0;
    cin >> l >> r;
    int *A = new int[r + 1]();
    A[0] = 1;
    A[1] = 1;
    for (int i = 2; i < r + 2; i++) {
        if (A[i] == 0) {
            A[i] = i;
            for (int j = i; j < r + 2; j += i) {
                if (A[j] == 0) A[j] = i;
            }
        }
    }
    for (int i = l; i < r + 1; i++) {
        temp = i;
        while (temp % A[temp] == 0) {
            if (temp > 1) {
                temp = temp / A[temp];
                sum++;
            } else break;
        }
        if (sum == did_dal) {
            if (did_sk < i) did_sk = i;
        } else if (sum > did_dal) {
            did_dal = sum;
            did_sk = i;
        }
        sum = 0;
    }
    cout << did_sk;
}

