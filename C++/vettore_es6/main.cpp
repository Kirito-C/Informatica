#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));

    const int MAX = 10;
    int array[MAX];
    int somma_pari = 0, somma_dispari = 0;

    for (int i = 0; i < MAX; ++i) {
        array[i] = rand() % 30;
        if (i % 2 == 0) {
            somma_pari += array[i];
        } else {
            somma_dispari += array[i];
        }
    }

    if (somma_pari == somma_dispari) {
        cout << "pari e dispari uguali" << endl;
    } else {
        cout << "pari e dispari diversi" << endl;
    }

    return 0;
}
