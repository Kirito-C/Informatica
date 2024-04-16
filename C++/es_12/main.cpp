#include <iostream>
#include <cmath>

using namespace std;

void sol_equazione(int a, int b, int c, float &sol1, float &sol2) {

    sol1 = (-(b) - sqrt(pow(b, 2) + (-4) * a * c)) / 2 * a;
    sol2 = (-(b) + sqrt(pow(b, 2) + (-4) * a * c)) / 2 * a;
}

int main() {
    int a, b, c;
    float sol1 = 0, sol2 = 0;
    cout << "Inserire a, b e c: ";
    cin >> a >> b >> c;
    cout << endl;
    if ((pow(b, 2) + (-4) * a * c) < 0 ) {
        cout << "Non ci sono soluzioni reali" << endl;
    } else {
        sol_equazione(a, b, c, sol1, sol2);
        cout << "la prima soluzione è: " << sol1 << endl;
        cout << "la seconda soluzione è: " << sol2 << endl;
    }
    return 0;
}
