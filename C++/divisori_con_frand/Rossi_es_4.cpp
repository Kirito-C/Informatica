#include <iostream>

using namespace std;

int fdivisori(int a) {
    cout << "I divisori di " << a << " sono: ";
    for (int i = 1; i < a; ++i) {
        if (a % i == 0) {
            cout << i;
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}

int main() {
    int estrai, first, second;
    srand(time(NULL));
    cout << "Inserire 1 per estrarre il primo numero: ";
    cin >> estrai;
    first = rand() % 20 + 1;
    fdivisori(first);
    cout << "Inserire 1 per estrarre il primo numero: ";
    cin >> estrai;
    do {
        second = rand() % 50 + 1;
    } while (second < 30 || second > 50);
    fdivisori(second);
    return 0;
}
