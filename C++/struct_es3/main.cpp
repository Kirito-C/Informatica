#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Evento {
    int g;
    int m;
    int a;
    int h;
    int min;
    string nome_evento;
};

struct Persona {
    string nome;
    string cognome;
    char sesso;
    int eta;
    vector <Evento> eventi;
};

int main() {
    vector <Persona> persona;
    Persona p;
    Evento evento;
    string nome_persona;
    string cognome_persona;
    string nome_evento;
    int scelta = 1;
    int anno;

    while(scelta != 0) {
        cout << endl;
        cout << "\tmenu" << endl;
        cout << "\t0 - exit" << endl;
        cout << "\t1 - Registrazione persona" << endl;
        cout << "\t2 - Inserire un nuovo evento nell'agenda personale" << endl;
        cout << "\t3 - Visualizzare i dati personali e gli eventi di ogni persona" << endl;
        cout << "\t4 - Ricerca delle persone associate ad un evento" << endl;
        cout << "\t5 - Visualizzare tutti gli eventi di un certo anno" << endl;
        cin >> scelta;

        switch (scelta) {
            default:
                cout << "Non hai selezionato nulla!" << endl;
                break;

            case 0:
                cout << "Disconnessione in corso" << endl;
                break;

            case 1:
                cout << "nome della persona?" << endl;
                p.nome;
                cout << "cognome della persona?" << endl;
                cout << "età della persona?" << endl;
                p.eta;
                cout << "sesso della persona?" << endl;
                p.sesso;
                persona.push_back(p);
                break;

            case 2:
                cout << "Inserire il nome della persona" << endl;
                getline(cin>>ws, nome_persona);
                cout << "Inserire il cognome della persona" << endl;
                getline(cin>>ws, cognome_persona);
                for (int i = 0; i < persona.size(); ++i) {
                    if (persona.at(i).nome == nome_persona && persona.at(i).cognome == cognome_persona){
                        cout << "Inserire il nome dell'evento" << endl;
                        getline(cin>>ws, evento.nome_evento);
                        cout << "Inserire il giorno" << endl;
                        cin >> evento.g;
                        cout << "Inserire il mese" << endl;
                        cin >> evento.m;
                        cout << "Inserire l'anno" << endl;
                        cin >> evento.a;
                        cout << "Inserire l' ora" << endl;
                        cin >> evento.h;
                        cout << "Inserire i minuti" << endl;
                        cin >> evento.min;
                        persona.at(i).eventi.push_back(evento);
                    }
                }
                break;

            case 3:
                cout << "Stampo i dati personali e gli eventi di ogni persona" << endl;
                cout << endl;
                for (int i = 0; i < persona.size(); ++i) {
                    cout << "\t" << i + 1 << ") " << persona.at(i).nome << " " << persona.at(i).cognome << ":" << endl;
                    for (int j = 0; j < persona.at(i).eventi.size(); ++j) {
                        cout << "\t" << j + 1 << ") " << persona.at(i).eventi.at(i).nome_evento << "(" << persona.at(i).eventi.at(i).g << "/" << persona.at(i).eventi.at(i).m << "/" << persona.at(i).eventi.at(i).a << " - " << "ore: " << persona.at(i).eventi.at(i).h << ":" << persona.at(i).eventi.at(i).min << ")" << endl;
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Inserire il nome dell'evento" << endl;
                getline(cin>>ws, nome_evento);
                for (int i = 0; i < persona.size(); ++i) {
                    for (int j = 0; j < persona.at(i).eventi.size(); ++j) {
                        if (persona.at(i).eventi.at(j).nome_evento == nome_evento) {
                            cout << persona.at(i).nome << " " << persona.at(i).cognome << endl;
                            break;
                        }
                    }
                }
                break;

            case 5:
                cout << "Inserire il nome della persona" << endl;
                getline(cin>>ws, nome_persona);
                cout << "Inserire il cognome della persona" << endl;
                getline(cin>>ws, cognome_persona);
                cout << "Inserire l'anno" << endl;
                cin >> anno;
                for (int i = 0; i < persona.size(); ++i) {
                    if (persona.at(i).nome == nome_persona && persona.at(i).cognome == cognome_persona) {
                        for (int j = 0; j < persona.at(i).eventi.size(); ++j) {
                            cout << "Eventi nell'anno: " << anno << endl;
                            if (persona.at(i).eventi.at(j).a == anno) {
                                cout << "Evento n." << j + 1 << ": " << persona.at(i).eventi.at(j).nome_evento << "(" << persona.at(i).eventi.at(i).g << "/" << persona.at(i).eventi.at(i).m << "/" << persona.at(i).eventi.at(i).a << " - " << "ore: " << persona.at(i).eventi.at(i).h << ":" << persona.at(i).eventi.at(i).min << ")" << endl;
                            }
                        }
                    }
                }
                break;
        }
    }

    return 0;
}
