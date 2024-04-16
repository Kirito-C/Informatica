#include <iostream>

using namespace std;

int main() {
    int n, last, count = 2, multipli = 0;
    cout << "Inserire il numero: ";
    cin >> n;
    cout << endl;
    if (n % 5 == 0)
        multipli++;
    last = n;
    cout << "Inserire il numero: ";
    cin >> n;
    while(last > n) {
        last = n;
        cout << endl;
        if (n % 5 == 0) {
            multipli++;
        }
        count++;
        cout << "Inserire il numero: ";
        cin >> n;
    }
    cout << "Sono stati inseriti " << count << " numeri e " << multipli << " erano multipli di 5" << endl;
    return 0;
}
