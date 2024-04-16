#include <iostream>

using namespace std;

int main() {
    int distanza;
    float h_iniziale, h_finale = 3.5;
    cout << "Inserire quanti km dista la spiaggia: ";
    cin >> distanza;
    h_iniziale = h_finale * 2;
    for (int i = 0; i < distanza - 1; ++i) {
        h_iniziale *= 2;
    }
    cout << "L'onda deve avere h_iniziale minore di " << h_iniziale << " metri per non risultare pericolosa" << endl;
    return 0;
}
