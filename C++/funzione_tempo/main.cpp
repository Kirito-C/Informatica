#include <iostream>

using namespace std;

int fsecondi(int ore, int minuti, int secondi) {
    int secondi_totali;
    secondi_totali = (3600 * ore) + (minuti * 60) + secondi;
    return secondi_totali;
}

int main() {
    int ore, minuti, secondi, secondi_totali;
    cout << "Inserire le ore: " << endl;
    cin >> ore;
    cout << "Inserire i minuti: " << endl;
    cin >> minuti;
    cout << "Inserire i secondi: " << endl;
    cin >> secondi;
    secondi_totali = fsecondi(ore, minuti, secondi);
    cout << "La quantità di tempo inserita in secondi è: " << secondi_totali << " secondi." << endl;
    return 0;
}
