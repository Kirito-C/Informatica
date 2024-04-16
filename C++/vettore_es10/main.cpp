#include <iostream>

using namespace std;

int main() {
    int MAX;
    cout << "inserire max: " << endl;
    cin >> MAX;
    int somma = 0;
    int count;
    int array[MAX];

    for (int i = 0; i < MAX; ++i) {
        cout << "inserisci n" << endl;
        cin >> array[i];
    }

    for (int i = 0; i < MAX; ++i) {
        if (array[i] % 3 == 0) {
            somma += array[i];
            count++;
        }
    }

    cout << "la media è: " << somma/MAX << endl;
    return 0;
}
