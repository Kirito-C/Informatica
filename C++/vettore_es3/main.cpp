#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    const int MAX = 8;
    int a, b;
    int array[MAX];

    for (int i = 0; i < MAX; ++i) {
        array[i] = rand() % 20;
    }

    cout << "Inserire l'intervallo (a e b <= 20)" << endl;
    cin >> a >> b;
    for (int i = 0; i < MAX; ++i) {
        if (array[i] >= a && array[i] <= b)
        cout << array[i] << " cella n." << i << endl;
    }
    return 0;
}
