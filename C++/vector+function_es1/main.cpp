#include <iostream>
#include <cmath>

using namespace std;

void quadrato(int vettore[], int dim) {
    for (int i = 0; i < dim; ++i) {
        vettore[i] = pow(vettore[i], 2);
    }
}

int main() {
    const int dim = 5;
    int v[dim];

    for (int i = 0; i < dim; i++) {
        cout << "inserisci un numero: ";
        cin >> v[i];
    }

    quadrato(v, dim);
    cout << endl;

    for (int i = 0; i < dim; ++i) {
        cout << "quadrato n." << i << ": " << v[i] << endl;
    }

    return 0;
}
