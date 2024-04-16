#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    const int MAX_POSTI = 10;
    int posti[10];
    for (int i = 0; i < MAX_POSTI; ++i) {
        posti[i] = 0;
    }

    posti[rand() % 10] = 1;

    for (int i = 0; i < MAX_POSTI; ++i) {
        if (posti[i] == 1) {
            cout << "numero uno trovato nella cella n." << i << endl;
            break;
        }
    }

    return 0;
}
