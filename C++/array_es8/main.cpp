#include <iostream>

using namespace std;

int main() {
    int MAX;
    cout << "MAX: " << endl;
    cin >> MAX;

    int A[MAX];
    int B[MAX];
    int C[MAX];
    int n;

    for (int i = 0; i < MAX; ++i) {
        cout << "inserisci A pos." << i << endl;
        cin >> n;
        A[i] = n;
    }

    for (int i = 0; i < MAX; ++i) {
        cout << "inserisci B pos." << i << endl;
        cin >> n;
        B[i] = n;
    }

    for (int i = 0; i < MAX; ++i) {
        if (A[i] >= B[i]) {
            C[i] = A[i];
        } else {
            C[i] = B[i];
        }
    }

    for (int i = 0; i < MAX; ++i) {
        cout << "inserisci C pos." << i << ": " << C[i] << endl;
    }

    return 0;
}
