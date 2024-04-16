#include <iostream>
#include <vector>
#include <string>
#include <thread>

using namespace std;

struct Acquirente {
    string nome;
    string cognome;
    string residenza;
    int g = 0;
    int m = 0;
    int a = 0;
};

struct Automobile {
    string marca;
    string immatricolazione;
    float cilindrata = 0;
    int anno_immatricolazione = 0;
    Acquirente persona;
};

int main() {
    vector <Automobile> automobili;
    Automobile temp;
    int scelta;
    int anno;

    while("") {
        system("CLS");
        cout << endl;
        cout << "\tWelcome to the database" << endl;
        cout << endl << "\tmenu" << endl;
        cout << "\t0 - exit" << endl;
        cout << "\t1 - inserire un auto" << endl;
        cout << "\t2 - visualizzare i proprietari delle macchine con cilindrata superiore a 1500" << endl;
        cout << "\t3 - visualizzare le auto immatricolate in un anno specifico" << endl;
        cout << "\t4 - mostra tutte le macchine inserite" << endl;
        cin >> scelta;
        cout << endl;

        if (scelta == 0)
            break;

        switch (scelta) {
            default:
                cout << "Non hai selezionato nulla" << endl;
                cout << endl;
                break;

            case 1:
                cout << "Inserire la marca dell'auto" << endl;
                cin >> temp.marca;
                cout << "Inserire la cilindrata dell'auto" << endl;
                cin >> temp.cilindrata;
                cout << "Inserire il numero di immatricolazione" << endl;
                cin >> temp.immatricolazione;
                cout << "Inserire l'anno di immatricolazione" << endl;
                cin >> temp.anno_immatricolazione;
                cout << "Inserire il nome dell'acquirente" << endl;
                getline(cin>>ws, temp.persona.nome);
                cout << "Inserire il cognome dell'acquirente" << endl;
                getline(cin>>ws, temp.persona.cognome);
                cout << "Inserire la residenza dell'acquirente" << endl;
                getline(cin>>ws, temp.persona.residenza);
                cout << "Inserire il giorno di nascita dell'acquirente" << endl;
                cin >> temp.persona.g;
                cout << "Inserire il mese di nascita dell'acquirente" << endl;
                cin >> temp.persona.m;
                cout << "Inserire l'anno di nascita dell'acquirente" << endl;
                cin >> temp.persona.a;
                automobili.push_back(temp);
                cout << endl;
                break;

            case 2:
                cout << "\tVisualizzo dati dei proprietari di macchine con cilindrata superiore a 1500:" << endl;
                for (int i = 0; i < automobili.size(); ++i) {
                    if (automobili.at(i).cilindrata >= 1500) {
                        cout << "\t" << i << " - " << automobili.at(i).persona.nome << " " << automobili.at(i).persona.cognome << endl;
                        cout << endl;
                    }
                }
                cout << endl;
                break;

            case 3:
                cout << "Inserire l'anno: " << endl;
                cin >> anno;
                cout << endl;
                cout << "Visualizzo le auto immatricolate nell'anno: " << anno << endl;
                for (int i = 0; i < automobili.size(); ++i) {
                    if (automobili.at(i).anno_immatricolazione == anno) {
                        cout << i << " - " << automobili.at(i).marca << endl;
                        cout << "\t - " << automobili.at(i).cilindrata << endl;
                        cout << "\t - " << automobili.at(i).immatricolazione << endl;
                        cout << "\t - Dati proprietario:" << endl;
                        cout << "\t - " << automobili.at(i).persona.nome << endl;
                        cout << "\t - " << automobili.at(i).persona.cognome << endl;
                        cout << "\t - " << automobili.at(i).persona.residenza << endl;
                        cout << "\t - Data di nascita: " << automobili.at(i).persona.g << "/" << automobili.at(i).persona.g << "/" << automobili.at(i).persona.g << endl;
                        cout << endl;
                    }
                }
                cout << endl;
                system("pause");
                break;

            case 4:
                cout << "Visualizzo le automobili inserite:" << endl;
                for (int i = 0; i < automobili.size(); ++i) {
                    cout << i << " - " << automobili.at(i).marca << ":" << endl;
                    cout << "\t - " << automobili.at(i).cilindrata << endl;
                    cout << "\t - " << automobili.at(i).immatricolazione << endl;
                    cout << "\t - " << automobili.at(i).anno_immatricolazione << endl;
                    cout << "\t - Dati proprietario:" << endl;
                    cout << "\t - " << automobili.at(i).persona.nome << endl;
                    cout << "\t - " << automobili.at(i).persona.cognome << endl;
                    cout << "\t - " << automobili.at(i).persona.residenza << endl;
                    cout << "\t - Data di nascita: " << automobili.at(i).persona.g << "/" << automobili.at(i).persona.g << "/" << automobili.at(i).persona.g << endl;
                    cout << endl;
                }
                cout << endl;
                system("pause");
                break;
        }
    }
}
