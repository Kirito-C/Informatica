#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int primo = 0, secondo, terzo, lancia, count = 0, tris = 0, coppie = 0;
    srand(time(NULL));
    while(primo != 1 || secondo != 1 || terzo != 1) {
        cout << "Inserire 1 per lanciare i dadi: ";
        cin >> lancia;
        primo = rand() % 6 + 1;
        secondo = rand() % 6 + 1;
        terzo = rand() % 6 + 1;
        count++;
        if (primo == secondo == terzo) {
            tris++;
        } else if (primo == secondo) {
            coppie++;
        } else if (secondo == terzo) {
            coppie++;
        }
        cout << primo << ", " << secondo << ", " << terzo << endl;
    }
    cout << "Sono uscite " << coppie << " coppie e " << tris << " tris" << endl;
    return 0;
}
