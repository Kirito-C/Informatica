#include <iostream>

using namespace std;

int main() {
    const int DIM = 10;
    int v[DIM][DIM];

    srand(time(NULL));

    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            v[i][j] = rand() % 10;
        }
    }

    int zeri = 0;

    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            cout << v[i][j] << " ";
            if (v[i][j] == 0)
                zeri++;
        }
        cout << endl;
    }

    cout << zeri;
    return 0;
}
