#include <iostream>
#include <thread>
using namespace std;

void ritardo() {
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(800ms);
}

string genID(string ID) {
    srand(time(NULL));

    int randomlevel;

    //dichiarazione array dei 3 livelli di sicurezza
    char level2[] = "0123456789";
    char level3[] = {'!', '$', '&', '?', '^', '_', '<', '>', '*', '@', '#'};
    char level1[] = {'a' , 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int select;
    char carattere;

    //generazione random di ogni carattere dell'ID
    for(int i = 0; i < 10; i++) {
        randomlevel = rand() % 3 + 1;
        if(randomlevel == 1) {
            select = rand() % 52;
            carattere = level1[select];
            ID += carattere;
        }
        if(randomlevel == 2) {
            select = rand() % 11;
            carattere = level2[select];
            ID += carattere;
        }
        if(randomlevel == 3) {
            select = rand() % 12;
            carattere = level3[select];
            ID += carattere;
        }
    }
    return ID;
}

int main() {

    //dichiarazione variabili
    const int LIMITE_MAGAZZINO = 20;
    int quantita_utente;
    int quantita[LIMITE_MAGAZZINO];
    int totale_prodotti = 0;
    int count = 0;
    int scelta_menu;
    char replace = 'S';
    int modifica = 0;
    string codiceID;
    string nome_prodotto;
    string ID[LIMITE_MAGAZZINO];
    string prodotto[LIMITE_MAGAZZINO];
    bool found = false;
    bool same = false;
    char scelta_modifica;

    std::cout << "Quanti prodotti vuoi inserire?" << endl;
    std::cin >> quantita_utente;
    totale_prodotti += quantita_utente;

    cout << endl;

    //ciclo per inserimento prodotto, quantità
    cout << "Inserire il nome del prodotto" << endl;
    cin >> prodotto[0];
    cout << endl << "Inserire la quantità del prodotto" << endl;
    cin >> quantita[0];

    //generazione ID
    ID[0] = genID(codiceID);
    cout << "ID generato del prodotto: " << ID[0] << "." << endl;

    for (int i = 1; i < quantita_utente; i++) {
        cout << endl;
        cout << "Inserire il nome del prodotto" << endl;
        cin >> prodotto[i];
        cout << endl << "Inserire la quantità del prodotto" << endl;
        cin >> quantita[i];

        //generazione ID e controllo ID precedenti
        do {
            ID[i] = genID(codiceID);
            cout << endl;
            for (int j = 0; j < i; ++j) {
                if (ID[j] == ID[i]) {
                    same = true;
                }
            }
        } while (same);

        cout << endl;
        cout << "ID generato del prodotto: " << ID[i] << "." << endl;
    }

    while ("") {
        count = 0;

        //menu
        cout << endl;
        cout << "\t1 - ricerca prodotto tramite ID per informazioni o aggiornamento prodotto" << endl;
        cout << "\t2 - sostituzione prodotto tramite ID" << endl;
        cout << "\t3 - ricerca prodotto tramite nome per informazioni o aggiornamento prodotto" << endl;
        cout << "\t4 - sostituzione prodotto tramite nome" << endl;
        cout << "\t5 - aggiunta prodotti (limite: " << LIMITE_MAGAZZINO << " - prodotti: " << totale_prodotti << ")" << endl;
        cout << "\t6 - lista prodotti" << endl;
        cout << "\t7 - lista ID prodotti" << endl;
        cout << "\t8 - exit (eliminazione dati del magazzino)" << endl;
        cout << "\tInserire il numero corrispondente alla scelta che si vuole effettuare: ";
        cin >> scelta_menu;
        cout << endl;

        if (scelta_menu == 1) {
            found = false;

            cout << "Inserire l'ID del prodotto: ";
            cin >> codiceID;

            //ricerca prodotto
            do {
                if (ID[count] == codiceID) {
                    cout << endl;
                    cout << "nome prodotto: " << prodotto[count] << " (quantità: " << quantita[count] << ")." << endl;
                    cout << endl;
                    cout << "modificare la quantità? (Y = si, N = no)" << endl;
                    cin >> scelta_modifica;
                    if (scelta_modifica == 'Y') {
                        cout << endl;
                        cout << "Inserire la quantià attuale del prodotto" << endl;
                        cin >> modifica;
                        quantita[count] = modifica;
                    } else if (scelta_modifica == 'N') {
                        cout << endl;
                        cout << "Hai scelto di non modificare la quantità" << endl;
                    }
                    scelta_modifica = 'S';
                    found = true;
                } else {
                    count++;
                }
            } while (count <= LIMITE_MAGAZZINO && !found);

            if (count > LIMITE_MAGAZZINO) {
                cout << endl;
                cout << "prodotto non trovato" << endl;
            }
        }

        if (scelta_menu == 2) {
            found = false;

            cout << "Inserire l'ID del prodotto: ";
            cin >> codiceID;

            //ricerca prodotto
            do {
                if (ID[count] == codiceID) {
                    cout << "nome prodotto: " << prodotto[count] << "(quantità: " << quantita[count] << ")." << endl;
                    cout << "sostituire prodotto? (Y --> si, N --> no)";
                    cin >> replace;
                    if (replace == 'Y') {
                        cout << "Inserire il nome del prodotto" << endl;
                        cin >> prodotto[count];
                        cout << endl;
                        cout << "Inserire la quantità del prodotto" << endl;
                        cin >> quantita[count];
                        cout << endl;
                        cout << "ID prodotto: " << ID[count] << "." << endl;
                    } else {
                        cout << endl;
                        cout << "annullo aggiornamento del prodotto..." << endl;
                    }
                    found = true;
                } else {
                    count++;
                }
            } while (count <= LIMITE_MAGAZZINO && !found);

            replace = 'S';

            if (count > LIMITE_MAGAZZINO) {
                cout << endl;
                cout << "prodotto non trovato" << endl;
            }
        }

        if (scelta_menu == 3) {
            cout << "Inserire il nome del prodotto:" << endl;
            cin >> nome_prodotto;

            //ricerca prodotto
            for (int i = 0; i <= totale_prodotti; i++) {
                if (prodotto[i] == nome_prodotto) {
                    cout << endl;
                    cout << "prodotto trovato" << endl;
                    cout << prodotto[i] << "(quantità: " << quantita[i] << ".)" << endl;
                    cout << "modificare la quantità? (Y --> si, N --> no)" << endl;
                    cin >> scelta_modifica;
                    if (scelta_modifica == 'Y') {
                        cout << endl;
                        cout << "Inserire la quantità attuale del prodotto" << endl;
                        cin >> modifica;
                        quantita[i] = modifica;
                    } else if (scelta_modifica == 'N') {
                        cout << endl;
                        cout << "Hai scelto di non modificare la quantità" << endl;
                    } else {
                        cout << "Prodotto non trovato" << endl;
                    }

                    scelta_modifica = 'S';
                }
            }
        }

        if (scelta_menu == 4) {
            cout << "Inserire il nome del prodotto: ";
            cin >> nome_prodotto;

            //ricerca prodotto
            do {
                if (prodotto[count] == nome_prodotto) {
                    cout << endl;
                    cout << "nome prodotto: " << prodotto[count] << "(quantità: " << quantita[count] << ")." << endl;
                    cout << ID[count] << endl;
                    cout << "sostituire prodotto? (Y --> si, N --> no)";
                    cin >> replace;
                    if (replace == 'Y') {
                        cout << endl;
                        cout << "Inserire il nome del prodotto" << endl;
                        cin >> prodotto[count];
                        cout << endl;
                        cout << "Inserire la quantità del prodotto" << endl;
                        cin >> quantita[count];
                        cout << endl;
                        cout << "ID prodotto: " << ID[count] << "." << endl;
                    } else {
                        cout << endl;
                        cout << "annullo aggiornamento del prodotto..." << endl;
                    }
                    found = true;
                } else {
                    count++;
                }
            } while (count <= LIMITE_MAGAZZINO && !found);

            if (count > LIMITE_MAGAZZINO) {
                cout << endl;
                cout << "prodotto non trovato" << endl;
            }
        }

        if (scelta_menu == 5) {
            //inserire un controllo sulla quantità inserita dall'utente che potrebbe superare il limite del magazzino
            cout << "Quanti prodotti vuoi aggiunegere?" << endl;
            cin >> quantita_utente;
            for (int i = totale_prodotti + 1; i <= totale_prodotti + quantita_utente; ++i) {
                cout << endl;
                cout << "Inserire il nome del prodotto" << endl;
                cin >> prodotto[i];
                cout << endl;
                cout << "Inserire la quantità del prodotto" << endl;
                cin >> quantita[i];

                //generazione ID e controllo ID precedenti
                do {
                    ID[i] = genID(codiceID);
                    cout << endl;
                    for (int j = 0; j < i; ++j) {
                        if (ID[j] == ID[i]) {
                            same = true;
                        }
                    }
                } while (same);

                cout << endl;
                cout << "ID generato del prodotto: " << ID[i] << "." << endl;
            }

            totale_prodotti += quantita_utente;
        }

        if (scelta_menu == 6) {
            cout << "\tLista prodotti:" << endl;
            for (int i = 0; i < totale_prodotti; ++i) {
                cout << endl;
                cout << "\t" << i << " - " << prodotto[i] << endl;
            }

            cout << endl;
            cout << "\tpremere 0 per tornare al menù: ";
            cin >> scelta_menu;
        }

        if (scelta_menu == 7) {
            cout << "\tLista ID:" << endl;
            for (int i = 0; i < totale_prodotti; ++i) {
                cout << endl;
                cout << "\t" << i << " - " << ID[i] << endl;
            }

            cout << endl;
            cout << "\tpremere un qualsiasi numero per tornare al menù: ";
            cin >> scelta_menu;
        }

        if (scelta_menu == 8) {
            cout << "eliminazione dati del magazzino in corso...";
            cout << endl;
            cout << "exit in...";
            ritardo();
            cout << "3...";
            ritardo();
            cout << "2...";
            ritardo();
            cout << "1...";
            ritardo();
            cout << "Disconnessione effettuata con successo" << endl;
            ritardo();
            break;
        }

        scelta_menu = 0;
    }
}