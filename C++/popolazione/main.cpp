#include <iostream>

using namespace std;

int main() {
    float tasso;
    int anni, popolazione, risultato;
    cout << "Inserire la popolazione iniziale: " << endl;
    cin >> popolazione;
    cout << "Inserire il tasso di incremento della popolazione (es. 0.50): " << endl;
    cin >> tasso;
    cout << "Inserire in quanti anni aumenta: " << endl;
    cin >> anni;
    for (int i = 1; i < anni; ++i) {
        risultato += popolazione + popolazione * tasso;
    }
    cout << "La popolazione è incrementata fino a " << risultato << " persone in " << anni << " anni" << endl;
    return 0;
}
