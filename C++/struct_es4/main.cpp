#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Esame {
    string materia;
    int voto;
    string data;
};

struct Studente {
    string nome;
    string matricola;
    vector<Esame> esami_sostenuti;
};

vector<Studente> studenti;
vector<vector<string>> appelli_per_materia; // Vettore di vettori di stringhe per memorizzare le date degli appelli

void aggiungi_studente() {
    Studente nuovo_studente;
    cout << "Nome: ";
    cin >> nuovo_studente.nome;
    cout << "Numero matricola: ";
    cin >> nuovo_studente.matricola;
    int num_esami;
    cout << "Numero di esami sostenuti: ";
    cin >> num_esami;
    for (int i = 0; i < num_esami; ++i) {
        Esame esame;
        cout << "Materia: ";
        cin >> esame.materia;
        cout << "Voto: ";
        cin >> esame.voto;
        cout << "Data (AAAA-MM-GG): ";
        cin >> esame.data;
        nuovo_studente.esami_sostenuti.push_back(esame);

        // Cerca se la materia è già presente nella lista delle materie
        bool materia_trovata = false;
        int index_materia = -1;
        for (int j = 0; j < appelli_per_materia.size(); ++j) {
            if (appelli_per_materia[j][0] == esame.materia) {
                materia_trovata = true;
                index_materia = j;
                break;
            }
        }
        // Se la materia non è presente, aggiungila alla lista
        if (!materia_trovata) {
            vector<string> nuova_materia;
            nuova_materia.push_back(esame.materia);
            appelli_per_materia.push_back(nuova_materia);
            index_materia = appelli_per_materia.size() - 1;
        }
        // Aggiungi la data dell'appello alla lista delle date degli appelli per la materia
        appelli_per_materia[index_materia].push_back(esame.data);
    }
    studenti.push_back(nuovo_studente);
}

void numero_studenti_per_materia() {
    string materia;
    cout << "Inserisci la materia: ";
    cin >> materia;
    int count = 0;
    for (int i = 0; i < studenti.size(); ++i) {
        for (int j = 0; j < studenti[i].esami_sostenuti.size(); ++j) {
            if (studenti[i].esami_sostenuti[j].materia == materia) {
                count++;
                break;
            }
        }
    }
    cout << "Numero studenti che hanno sostenuto l'esame in " << materia << ": " << count << endl;
}

void visualizza_studenti_voto_compreso() {
    cout << "Studenti con voto compreso tra 18 e 25:" << endl;
    for (int i = 0; i < studenti.size(); ++i) {
        for (int j = 0; j < studenti[i].esami_sostenuti.size(); ++j) {
            if (studenti[i].esami_sostenuti[j].voto >= 18 && studenti[i].esami_sostenuti[j].voto <= 25) {
                cout << "Nome: " << studenti[i].nome << ", Matricola: " << studenti[i].matricola << endl;
                break;
            }
        }
    }
}

void visualizza_date_appelli_materia_anno() {
    string materia, anno;
    cout << "Inserisci la materia: ";
    cin >> materia;
    cout << "Inserisci l'anno (AAAA): ";
    cin >> anno;
    cout << "Date degli appelli per la materia " << materia << " nell'anno " << anno << ":" << endl;

    // Cerca la materia nel vettore delle materie
    int index_materia = -1;
    for (int i = 0; i < appelli_per_materia.size(); ++i) {
        if (appelli_per_materia[i][0] == materia) {
            index_materia = i;
            break;
        }
    }

    // Se la materia è stata trovata, cerca le date degli appelli per l'anno specificato
    if (index_materia != -1) {
        for (int i = 1; i < appelli_per_materia[index_materia].size(); ++i) {
            if (appelli_per_materia[index_materia][i].substr(0, 4) == anno) {
                cout << appelli_per_materia[index_materia][i] << endl;
            }
        }
    } else {
        cout << "Materia non trovata." << endl;
    }
}

void stampa_dati_studente() {
    string matricola;
    cout << "Inserisci il numero di matricola dello studente: ";
    cin >> matricola;
    for (int i = 0; i < studenti.size(); ++i) {
        if (studenti[i].matricola == matricola) {
            cout << "Dati dello studente con numero di matricola " << matricola << ":" << endl;
            cout << "Nome: " << studenti[i].nome << endl;
            cout << "Esami sostenuti:" << endl;
            for (int j = 0; j < studenti[i].esami_sostenuti.size(); ++j) {
                cout << "- Materia: " << studenti[i].esami_sostenuti[j].materia << ", Voto: " << studenti[i].esami_sostenuti[j].voto << ", Data: " << studenti[i].esami_sostenuti[j].data << endl;
            }
            return;
        }
    }
    cout << "Studente non trovato." << endl;
}

int main() {
    int scelta;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Aggiungi studente" << endl;
        cout << "2. Conoscere il numero di studenti che hanno sostenuto l'esame in una determinata materia" << endl;
        cout << "3. Visualizzare gli studenti che hanno un voto compreso tra 18 e 25" << endl;
        cout << "4. Visualizzare le date degli appelli di una materia in un anno" << endl;
        cout << "5. Stampare i dati dello studente con numero di matricola dato" << endl;
        cout << "6. Uscita" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                aggiungi_studente();
                break;
            case 2:
                numero_studenti_per_materia();
                break;
            case 3:
                visualizza_studenti_voto_compreso();
                break;
            case 4:
                visualizza_date_appelli_materia_anno();
                break;
            case 5:
                stampa_dati_studente();
                break;
            case 6:
                cout << "Uscita." << endl;
                break;
            default:
                cout << "Scelta non valida." << endl;
        }
    } while (scelta != 6);

    return 0;
}
