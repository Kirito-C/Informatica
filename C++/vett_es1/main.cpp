#include <iostream>

using namespace std;

int main() {
    const int MAX = 10;
    int count = 0;
    int exit_program = 1;
    int v[MAX] = {0, 0, 0, 0, 0,0 , 0, 0, 0, 0};
    int cases;

    while(exit_program != 0) {

        exit_program = 1;

        cout << endl;
        cout << "\t menu:" << endl;
        cout << "\t 0 - exit" << endl;
        cout << "\t 1 - aggiungere un numero" << endl;
        cout << "\t 2 - rimuovere l'ultimo numero inserito" << endl;
        cout << "\t 3 - visualizzare il vettore" << endl;
        cout << "\t 4 - visualizzare il vettore invertito" << endl;
        cout << "\t 5 - invertire gli elementi del vettore" << endl;

        cin >> cases;

        switch (cases) {
            default:
                cout << "non hai selezionato nulla" << endl;
                break;

            case 0:
                exit_program = 0;
                break;

            case 1:
                if (count < 10) {
                    cout << "Inserire il numero" << endl;
                    cin >> v[count];
                    count++;
                } else {
                    cout << "limite massimo raggiunto" << endl;
                }
                break;

            case 2:
                if (count > 0) {
                    cout << "ultimo numero rimosso - " << v[count] << endl;
                    v[count] = 0;
                    count--;
                } else if (count == 0) {
                    cout << "ultimo numero rimosso - " << v[count] << endl;
                    v[count] = 0;
                } else {
                    cout << "non ci sono numeri da eliminare" << endl;
                }
                break;

            case 3:
                cout << "vettore:" << endl;
                for (int i = 0; i < count; i++) {
                    cout << i << " - " << v[i] << endl;
                }
                break;

            case 4:
                cout << "vettore invertito" << endl;
                for (int i = count; i >= 0; i--) {
                    cout << i << " - " << v[i] << endl;
                }
                break;

            case 5:
                int temp;
                int inverto = count - 1;
                for (int i = count - 1; i > 0; i++) {
                    swap(v[i], v[count - 1 - i]);
                }
                cout << "vettore invertito" << endl;
                break;
        }
    }
    return 0;
}
