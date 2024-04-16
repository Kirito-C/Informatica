#include <iostream>

using namespace std;

int fdivisori(int a) {
    int count = 0;
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N, d, f;
    cout << "Inserire il numero: " << endl;
    cin >> N;
    d = fdivisori(N);
    f = fdivisori(d);
    cout << "Il numero " << N << " ha " << d << " divisori." << endl;
    cout << "Il numero " << d << " ha " << f << " divisori." << endl;
    return 0;
}
