#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int Val_iniziale, Val_finale = 0, lancia;
    cout << "Lanciare il dado scrivendo 1 + INVIO" << endl;
    cin >> lancia;
    Val_finale += rand() % 6 + 1;
    if (Val_finale > Val_iniziale) {
        cout << "Hai perso!" << endl;
    } else {
        cout << "Lanciare il dado scrivendo 1 + INVIO" << endl;
        cin >> lancia;
        Val_finale += rand() % 6 + 1;
        if (Val_finale > Val_iniziale) {
            cout << "Hai perso!" << endl;
        } else {
            cout << "Lanciare il dado scrivendo 1 + INVIO" << endl;
            cin >> lancia;
            Val_finale += rand() % 6 + 1;
            if (Val_finale > Val_iniziale) {
                cout << "Hai perso!" << endl;
            } else {
                cout << "Hai vinto!" << endl;
            }
        }
    }
    return 0;
}
