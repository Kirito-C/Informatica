#include <iostream>

using namespace std;

int f_maggiore(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int f_minore(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    } else if (b < a && b < c) {
        return b;
    } else {
        return c;
    }
}

int f_somma(int x, int y) {
    return x + y;
}

int main() {
    int h, k, n1, n2, n3, magg, min;
    cout << "Inserire h: ";
    cin >> h;
    cout << "Inserire k: ";
    cin >> k;
    if (h > k) {
        int temp = h;
        h = k;
        k = temp;
    }
    do {
        cout << "Inserire il primo numero: ";
        cin >> n1;
    } while (n1 > k || n1 < h);
    do {
        cout << "Inserire il secondo numero: ";
        cin >> n2;
    } while (n2 > k || n2 < h);
    do {
        cout << "Inserire il terzo numero: ";
        cin >> n3;
    } while (n3 > k || n3 < h);
    magg = f_maggiore(n1, n2, n3);
    min = f_minore(n1, n2, n3);
    cout << "Il numero maggiore è: " << magg << endl;
    cout << "Il numero minore è: " << min << endl;
    cout << "La somma tra il minore e il maggiore è: " << f_somma(magg, min) << endl;
    return 0;
}
