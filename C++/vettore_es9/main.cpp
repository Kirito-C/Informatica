#include <iostream>

using namespace std;

int main() {
    const int MAX = 10;
    int array[MAX];

    for (int i = 0; i < MAX; ++i) {
        cout << "inserisci n" << endl;
        cin >> array[i];
        cout << endl;
    }

    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < array[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
