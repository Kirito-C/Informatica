#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cases;
    int exit_program = 1;

    vector <int> vettore1;
    vector <int> vettore2;
    vector <int> vettore3;

    for (int i = 0; i < 20; ++i) {
        vettore1.at(i) = rand() % 21;
    }

    for (int i = 0; i < 20; ++i) {
     vettore2.at(i) = rand() % 31 - 10;
    }

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
                cout << "termino il programma" << endl;
                exit_program = 0;
                break;

            case 1:
                cout << "visualizzo il primo vettore:" << endl;
                for (int i = 0; i < 20; ++i) {
                    cout << i << " - " << vettore1.at(i) << endl;
                }

                cout << "visualizzo il secondo vettore:" << endl;
                for (int i = 0; i < 20; ++i) {
                    cout << i << " - " << vettore2.at(i) << endl;
                }

                break;

            case 2:

                int indice = 0;

                cout << "fondo i due vettori in un terzo vettore" << endl;
                for (int i = 0; i < 20; ++i) {
                    vettore3.at(indice) = vettore1.at(i);
                    indice++;
                }

                for (int i = 0; i < 20; ++i) {
                    vettore3.at(indice) = vettore2.at(i);
                    indice++;
                }

                break;
        }
    }
    return 0;
}
