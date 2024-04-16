#include <iostream>
#include <cmath>

using namespace std;

double distanza_punti(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main() {
    double AB, BC, DA;
    int x1, x2, x3, y1, y2, y3;
    cout << "Inserire x1: " << endl;
    cin >> x1;
    cout << "Inserire y1. " << endl;
    cin >> y1;
    cout << "Inserire x2: " << endl;
    cin >> x2;
    cout << "Inserire y2: " << endl;
    cin >> y2;
    cout << "Inserire x3: " << endl;
    cin >> x3;
    cout << "Inserire y3: " << endl;
    cin >> y3;
    AB = distanza_punti(x1, y1, x2, y2);
    BC = distanza_punti(x2, y2, x3, y3);
    DA = distanza_punti(x3, y3, x1, y1);
    double perimetro = AB + BC + DA;
    cout << "Il perimetro del triangolo è: " << perimetro << endl;
    return 0;
}
