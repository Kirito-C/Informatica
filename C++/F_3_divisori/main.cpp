#include <iostream>

using namespace std;

bool f_divisori(int a, int &b) {
    int count1 = 2, count2 = 2;
    for (int i = 2; i < a; ++i) {
        if (a % i == 0) {
            count1++;
            b = i;
        }
    }

    for (int i = 2; i < b; ++i) {
        if (a % i == 0)
            count2++;
    }

    if (count1 >= 3 || count2 >= 3) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int max, n;
    cout << "Inserire n: ";
    cin >> n;
    if (f_divisori(n, max)) {
        cout << n << " e " << max << " hanno entrambi almeno 3 divisori" << endl;
    } else {
        cout << n << " e " << max << " non hanno entrambi almeno 3 divisori" << endl;
    }

    return 0;
}
