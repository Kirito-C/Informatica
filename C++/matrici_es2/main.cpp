#include <iostream>

using namespace std;

int main() {
    int DIM;
    cin >> DIM;
    int v[DIM][DIM];
    int riga = 0;
    int colonna = 0;

    for (int i = 0; i < DIM; ++i) {

        for (int j = 0; j < i; ++j) {
            v[i][j] = 0;
        }

        v[riga][colonna] = 1;

        for (int i = colonna + 1; i < DIM; ++i) {
            v[riga][i] = 0;
        }

        riga++;
        colonna++;
    }

    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
