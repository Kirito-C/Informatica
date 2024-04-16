#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    string cognome;

    cout << "nome: ";
    cin >> nome;
    cout << endl << "cognome: ";
    cin >> cognome;
    cout << endl << "Buongiorno " << nome << " " << cognome << endl;
    return 0;
}
