#include <iostream>

using namespace std;

int f_magg_min(int n, int m) {
    for (int i = n;;++i) {
        if (i % m == 0 && i != m) {
            return i;
        }
    }
}

int main() {
    int x, y;
    cout << "Inserire x: ";
    cin >> x;
    cout << "Inserire y: ";
    cin >> y;
    if (f_magg_min(x, y) > f_magg_min(y, x)) {
        cout << "Maggiore" << endl;
    } else {
        cout << "Minore" << endl;
    }
    return 0;
}
