#include <iostream>

using namespace std;

int main() {
    const int MAX = 10;
    int array[MAX];
    int n;

    for (int i = 0; i < MAX; ++i) {
        cout << "inserisci il numero" << endl;
        cin >> n;
        array[i] = n;
    }

    for (int i = 0; i < MAX; ++i) {
        if (array[i] > array[i + 1] && i != 9) {
            cout << "Ordine non crescente" << endl;
            break;
        }

        if (i == 9) {
            cout << "Ordine crescente" << endl;
        }
    }

    return 0;
}
