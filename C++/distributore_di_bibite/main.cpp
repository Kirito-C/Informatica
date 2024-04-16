#include <iostream>

using namespace std;

int main() {
    int bottiglie = 20, coca = 20, scelta;
    float importo, resto, saldo, saldo_mancante, costo_coca = 2, costo_acqua = 1;
    while(bottiglie != 0 && coca != 0) {
        cout << "Inserire il numero 1 per la coca cola o il numero 2 per l'acqua: ";
        cin >> scelta;
        switch (scelta) {
            default:
                cout << "Scegliere il prodotto" << endl;
            case 1:
                if (coca > 0) {
                    cout << "Il costo è di 1 euro." << endl << "Inserire l'importo richiesto: ";
                    cin >> importo;
                    while(importo < costo_coca) {
                        saldo_mancante = costo_coca - importo;
                        cout << "Saldo mancante: " << saldo_mancante << endl << "Inserire l'importo richiesto: ";
                        cin >> saldo;
                        importo += saldo;
                    }
                    cout << "Erogazione prodotto" << endl;
                    if (importo > 2) {
                        resto = importo - costo_coca;
                        cout << "Erogazione resto: " << resto << endl;
                    }
                    coca--;
                } else {
                 cout << "Prodotto terminato. Torna Domani!" << endl;
                }
                break;

            case 2:
                cout << "Il costo è di 1 euro." << endl << "Inserire l'importo richiesto: ";
                cin >> importo;
                while(importo < costo_acqua) {
                    saldo_mancante = costo_acqua - importo;
                    cout << "Saldo mancante: " << saldo_mancante << endl << "Inserire l'importo richiesto: ";
                    cin >> saldo;
                    importo += saldo;
                }
                cout << "Erogazione prodotto" << endl;
                if (importo > 2) {
                    resto = importo - costo_acqua;
                    cout << "Erogazione resto: " << resto << endl;
                }
                bottiglie--;
                break;
        }
    }
    cout << "Prodotti terminati: ritorna domani!" << endl;
    return 0;
}
