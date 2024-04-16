#include <iostream>

using namespace std;

int main() {
    const int MAX = 10;
    int array[MAX];
    int n;

    for (int i = 0; i < MAX; ++i) {
        cout << "Inserisci il numero" << endl;
        cin >> n;
        array[i] = n;
    }

    for (int i = 0; i < MAX; ++i) {
        if (i % 2 == 0) {
            if (array[i] % 2 != 0) {
                cout << "cella n." << i << " contiene un valore non pari" << endl;
                break;
            }
        }
    }
    return 0;
}
