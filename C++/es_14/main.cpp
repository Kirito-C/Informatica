#include <iostream>

using namespace std;

void ordina(int &a, int &b, int &c) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
}

int prod_scalare(int a1, int b1, int c1, int a2, int b2, int c2) {
    return (a1 * a2) + (b1 * b2) + (c1 * c2);
}

int main() {
    int a1, b1, c1, a2, b2, c2;
    cout << "Inserire la prima tripletta: ";
    cin >> a1 >> b1 >> c1;
    ordina(a1, b1, c1);
    cout << "Inserire la seconda tripletta: ";
    cin >> a2 >> b2 >> c2;
    ordina(a2, b2, c2);
    cout << "Il prodotto scalare delle triplette in ordine crescente è: " << prod_scalare(a1, b1, c1, a2, b2, c2) << endl;
    return 0;
}
