#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vector1;
    int scelta;
    int count = 0;

    while(count < 10) {
        cout << "\tmenu:" << endl;
        cout << "\t0 - uscire dal programma" << endl;
        cout << "\t1 - aggiungere un numero" << endl;
        cout << "\t2 - rimuovere un numero" << endl;
        cout << "\t3 - visualizzare il vettore" << endl;
        cout << "\t4 - visualizzare il vettore invertito" << endl;
        cout << "\t5 - invertire gli elementi del vettore" << endl;
        cout << "\tinserire la scelta: ";
        cin >> scelta;

        switch(scelta) {
            default:
                cout << "non hai inserito nulla" << endl;
                break;


        }


    }
    return 0;
}
