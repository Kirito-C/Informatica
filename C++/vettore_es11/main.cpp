#include <iostream>

using namespace std;

int main() {
    const int MAX = 10;
    int array[MAX];
    int ordine[MAX] = {0, 9, 1, 8, 2, 7, 3, 6, 4, 5};

    for (int i = 0; i < MAX; ++i) {
        cout << "inserisci n: " << endl;
        cin >> array[i];
    }

    for (int i = 0; i < MAX; ++i) {
        cout << array[ordine[i]] << endl;
    }
    return 0;
}
