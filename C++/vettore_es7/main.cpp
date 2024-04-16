#include <iostream>

using namespace std;

int main() {
    bool booll = false;
    const int MAX = 10;
    int array[MAX];
    int n;

    for (int i = 0; i < MAX; ++i) {
        cout << "inserisci n" << endl;
        cin >> n;
        array[i] = n;
        cout << endl;
    }
    for (int i = 0; i < MAX; ++i) {
        for (int j = 1; j < MAX; ++j) {
            if (array[i] == array[j]) {
                booll = true;
                break;
            }
        }
        if (booll)
            cout << array[i] << endl;

        booll = false;
    }
    return 0;
}
