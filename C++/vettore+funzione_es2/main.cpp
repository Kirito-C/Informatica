#include <iostream>

using namespace std;

int maggiore(int vettore[], int dim) {
    int posmaggiore = 0;
    int maggiore = vettore[posmaggiore];
    for (int i = 1; i < dim; ++i) {
        if(maggiore < vettore[i]) {
            maggiore = vettore[i];
            posmaggiore = i;
        }
    }
    return posmaggiore;
}

int minore(int vettore[], int dim) {
    int posminore = 0;
    int minore = vettore[posminore];
    for (int i = 0; i < dim; ++i) {
        if(minore > vettore[i]) {
            minore = vettore[i];
            posminore = i;
        }
    }

    return posminore;
}

int main() {
    int pos_magg;
    int pos_min;
    const int dim = 5;
    int v[dim];

    for (int i = 0; i < dim; ++i) {
        cout << "inserisci n" << endl;
        cin >> v[i];
    }

    pos_magg = maggiore(v, dim);
    pos_min = minore(v, dim);

    int temp = v[pos_min];
    v[pos_min] = v[pos_magg];
    v[pos_magg] = temp;

    for (int i = 0; i < dim; ++i) {
        cout << "cella n." << i << ": " << v[i] << endl;
    }

    return 0;
}
