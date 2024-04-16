#include <iostream>

using namespace std;

int main() {
    const int MAX = 8;
    int input;
    int array[MAX];

    for (int i = 0; i < MAX; ++i) {
        do {
            cout << "Inserire un numero (>0)" << endl;
            cin >> input;
            array[i] = input;
        } while(input <= 0);
    }

    for (int i = 0; i < MAX; ++i) {
        cout << array[i] << endl;
    }
    return 0;
}
