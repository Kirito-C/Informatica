#include <iostream>
#include <vector>

using namespace std;

void casual(vector <int> &vettore, int lunghezza) {
    for (int i = 0; i < lunghezza; ++i) {
        vettore.push_back(rand() % 11 + 0);
    }
}

int main(){

    vector <int> v;
    int n;

    while("") {
        cout << "Inserisci n: " << endl;
        cin >> n;
        casual(v, n);
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << endl;
        }
    }
}
