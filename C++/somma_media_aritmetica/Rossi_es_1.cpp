#include <iostream>
#include <cmath>

using namespace  std;

int main() {
    int h, k, somma = 0, count = 0;
    double media;
    cout << "Inserire h: ";
    cin >> h;
    cout << "Inserire k: ";
    cin >> k;
    for (int i = h; i <= k; ++i) {
        if(i % 2 == 0) {
            somma += pow(i, 3);
            count++;
        }
    }
    media = somma / count;
    cout << "La somma dei cubi dei numeri pari compresi tra " << h << " e " << k << " è: " << somma << "; e la media aritmetica è: " << media;
    return 0;
}
