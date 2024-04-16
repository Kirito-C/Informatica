#include <iostream>

using namespace std;

int main() {
    int importo, banconote20, banconote10, banconote5, monete2, monete1;
    cout << "Inserisci l'importo in euro: ";
    cin >> importo;
    banconote20 = importo / 20;
    importo %= 20;
    banconote10 = importo / 10;
    importo %= 10;
    banconote5 = importo / 5;
    importo %= 5;
    monete2 = importo / 2;
    importo %= 2;
    monete1 = importo;
    // Output del risultato
    cout << "Banconote da 20 euro: " << banconote20 << endl;
    cout << "Banconote da 10 euro: " << banconote10 << endl;
    cout << "Banconote da 5 euro: " << banconote5 << endl;
    cout << "Monete da 2 euro: " << monete2 << endl;
    cout << "Monete da 1 euro: " << monete1 << endl;
    return 0;
}