#include <iostream>
#include<vector>

using namespace std;

struct Gite {
    string nome;
    vector <string> tappe;
};


using namespace std;

int main() {
    vector <Gite> gite;
    Gite nuova_gita;
    string nome_tappa;
    string nome_gita;
    int pos = 0;
    bool found = false;
    int n;
    int max;
    char scelta = 'a';

    while(scelta != 'e') {
        cout << endl;
        cout << "\tmenu:" << endl;
        cout << "\tA - Inserire una nuova gita" << endl;
        cout << "\tB - Aggiungere una tappa ad una gita già esistente" << endl;
        cout << "\tC - Visualizzazione della gita con più tappe" << endl;
        cout << "\tD - Ricerca di una gita per nome" << endl;
        cout << "\tE - Ricerca di una gita per una sua tappa" << endl;
        cout << endl;
        cin >> scelta;

        switch (scelta) {
            default:
                cout << "non hai selezionato nulla!" << endl;
                break;

            case 'A':
                cout << "nome gita?" << endl;
                cin >> nuova_gita.nome;
                cout << "quante tappe?" << endl;
                cin >> n;
                for (int i = 0; i < n; ++i) {
                    cout << endl << "nome tappa n." << i << ":" << endl;
                    getline(cin>>ws, nome_tappa);
                    nuova_gita.tappe.push_back(nome_tappa);
                }
                gite.push_back(nuova_gita);
                cout << endl;
                break;

            case 'B':
                cout << "Inserire il nome della gita" << endl;
                cin >> nome_gita;
                for (int i = 0; i < gite.size() || found; ++i) {
                    if (gite.at(i).nome == nome_gita) {
                        found = true;
                        pos = i;
                    }
                }
                cout << "quante tappe vuoi aggiungere?" << endl;
                for (int i = 0; i < n; ++i) {
                    cout << "nome tappa?" << endl;
                    getline(cin>>ws, nome_tappa);
                    gite.at(pos).tappe.push_back(nome_tappa);
                }
                cout << endl;
                found = false;
                break;
                
            case 'C':
                cout << "mostro la gita con più tappe" << endl;
                max = gite.at(0).tappe.size();
                for (int i = 1; i < gite.size(); ++i) {
                    if(gite.at(i).tappe.size() > max) {
                        max = gite.at(i).tappe.size();
                        pos = i;
                    }
                }
                cout << "la gita con più tappe è: " << gite.at(pos).nome << endl;
                break;

            case 'D':
                cout << "Inserire il nome della gita: " << endl;
                getline(cin>>ws, nome_gita);
                for (int i = 0; i < gite.size() || found; ++i) {
                    if (gite.at(i).nome == nome_gita) {
                        found = true;
                        pos = i;
                    }
                }
                cout << "\ttappe: " << endl;
                for (int i = 0; i < gite.at(pos).tappe.size(); ++i) {
                    cout << "\t" << i + 1 << ") " << gite.at(pos).tappe.at(i) << endl;
                }
                break;

            case 'E':
                cout << "Inserire il nome della tappa" << endl;
                getline(cin>>ws, nome_tappa);
                for (int i = 0; i < gite.size(); ++i) {
                    for (int j = 0; j < gite.at(i).tappe.size(); ++j) {
                        if (nome_tappa == gite.at(i).tappe.at(j)) {
                            cout << endl;
                            cout << "\tnome gita n." << i << ": " << gite.at(i).nome << endl;
                            for (int k = 0; k < gite.at(i).tappe.size(); ++k) {
                                cout << "\t" << k + 1 << ") " << gite.at(i).tappe.at(k) << endl;
                            }
                        }
                    }
                }
                break;
        }
    }
    return 0;
}
