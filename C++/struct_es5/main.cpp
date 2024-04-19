#include <iostream>
#include <vector>
#include <string>

/*
Si vogliono registrare per i partecipanti a una manifestazione podistica i tempi di gara e le seguenti informazioni:
- numeroPettorale: cognome: eta: tempoDiGara
1. inserire un partecipante con i dati sopra indicati
2. visualizzare i dati dei partecipanti secondo la seguente
tabella :
categoria   età
Juniores    < 18
adulti      18 <=età <=50
senior      > 50
richiamare 3 volte la funzione visualizzacategoria passando come parametro l'età di appartenenza.
3. visualizzare i dati del vincitore della competizione.
4. visualizzare la media dei tempi di gara per i partecipanti senior.
*/

using namespace std;

// Definizione della struct per i partecipanti
struct Partecipante {
    int numeroPettorale;
    string cognome;
    int eta;
    float tempoDiGara;
};

// Funzione per visualizzare la categoria in base all'età
void visualizzaCategoria(int eta) {
    if (eta < 18)
        cout << "Juniores";
    else if (eta >= 18 && eta <= 50)
        cout << "Adulti";
    else if (eta > 50)
        cout << "Senior";
}

int main() {
    vector<Partecipante> partecipanti; // Vector di partecipanti
    bool continua = true;

    while (continua) {
        Partecipante nuovoPartecipante;
        cout << "Inserisci i dati del partecipante:" << endl;
        cout << "Numero pettorale: ";
        cin >> nuovoPartecipante.numeroPettorale;
        cout << "Cognome: ";
        cin >> nuovoPartecipante.cognome;
        cout << "Età: ";
        cin >> nuovoPartecipante.eta;
        cout << "Tempo di gara: ";
        cin >> nuovoPartecipante.tempoDiGara;

        partecipanti.push_back(nuovoPartecipante);

        char risposta;
        cout << "Vuoi inserire un altro partecipante? (s/n): ";
        cin >> risposta;
        if (risposta != 's' && risposta != 'S')
            continua = false;
    }

    // Visualizzazione dei partecipanti per categoria
    cout << "Partecipanti per categoria:" << endl;
    for (int eta = 0; eta < 3; eta++) {
        cout << "Categoria: ";
        visualizzaCategoria(eta * 21 + 9); // Età approssimativa per ogni categoria
        cout << endl;
        for (int i = 0; i < partecipanti.size(); ++i) {
            if ((eta == 0 && partecipanti[i].eta < 18) ||
                (eta == 1 && partecipanti[i].eta >= 18 && partecipanti[i].eta <= 50) ||
                (eta == 2 && partecipanti[i].eta > 50)) {
                cout << "Numero pettorale: " << partecipanti[i].numeroPettorale << ", Cognome: " << partecipanti[i].cognome << ", Tempo di gara: " << partecipanti[i].tempoDiGara << endl;
            }
        }
    }

    // Trova il vincitore della competizione
    int indiceVincitore = 0;
    float tempoVincitore = partecipanti[0].tempoDiGara;
    for (int i = 1; i < partecipanti.size(); ++i) {
        if (partecipanti[i].tempoDiGara < tempoVincitore) {
            indiceVincitore = i;
            tempoVincitore = partecipanti[i].tempoDiGara;
        }
    }
    cout << "Il vincitore della competizione è: Numero pettorale: " << partecipanti[indiceVincitore].numeroPettorale << ", Cognome: " << partecipanti[indiceVincitore].cognome << ", Tempo di gara: " << partecipanti[indiceVincitore].tempoDiGara << endl;

    // Calcolo della media dei tempi di gara per i partecipanti senior
    float sommaTempiSenior = 0;
    int contatoreSenior = 0;
    for (int i = 0; i < partecipanti.size(); ++i) {
        if (partecipanti[i].eta > 50) {
            sommaTempiSenior += partecipanti[i].tempoDiGara;
            contatoreSenior++;
        }
    }
    if (contatoreSenior > 0) {
        float mediaTempiSenior = sommaTempiSenior / contatoreSenior;
        cout << "La media dei tempi di gara per i partecipanti senior è: " << mediaTempiSenior << endl;
    } else {
        cout << "Non ci sono partecipanti senior." << endl;
    }

    return 0;
}