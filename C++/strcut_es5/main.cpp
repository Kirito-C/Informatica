#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Partecipante{
    string nome;
    int numeroPettorina;
    string cognome;
    int eta;
    int sec_tempoDiGara;
    int min_tempoDiGara;
    int ore_tempoDiGara;
};

struct Manifestazione{
    vector<Partecipante> partecipanti;
};

void VisualizzaCategoria(Manifestazione mani, int category) {
    if(category == 0) {
        //juniores
        for (int i = 0; i < mani.partecipanti.size(); ++i) {
            if(mani.partecipanti.at(i).eta < 18) {

            }
        }
    } else if(category == 1) {
        //adulti
        for (int i = 0; i < mani.partecipanti.size(); ++i) {
            if(mani.partecipanti.at(i).eta < 18) {

            }
        }
    } else if(category == 2) {
        //senior
        for (int i = 0; i < mani.partecipanti.size(); ++i) {
            if(mani.partecipanti.at(i).eta < 18) {

            }
        }
    }
}
int main() {
    Manifestazione m;
    Partecipante p;
    int n;

    cout << "Quanti partecipanti?" << endl;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "nome?" << endl;
        getline(cin>>ws, p.nome);
        cout << "cognome?" << endl;
        getline(cin>>ws, p.nome);
        cout << "numero pettorina?" << endl;
        cin >> p.numeroPettorina;
        cout << "età?" << endl;
        cin >> p.eta;
        cout << "secondi del tempo?" << endl;
        cin >> p.sec_tempoDiGara;
        cout << "minuti del tempo?" << endl;
        cin >> p.min_tempoDiGara;
        cout << "ore del tempo?" << endl;
        cin >> p.ore_tempoDiGara;
    }

    cout << "\tcategoria" << "\t   " << "\teta" << endl;
    for (int i = 0; i < 3; ++i) {
        VisualizzaCategoria(m, categoria);
        cout << endl;
        categoria++;
    }
    return 0;
}
