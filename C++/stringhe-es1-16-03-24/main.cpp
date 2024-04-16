#include <iostream>
#include <iostream>

using namespace std;

int main() {
    string p;
    char l;
    char asterisco = '*';
    cout << "parola?" << endl;
    cin >> p;
    cout << "lettera?" << endl;
    cin >> l;

    for (int i = 0; i < p.size(); ++i) {
        if (p.at(i) == l)
            p.at(i) = asterisco;
    }

    cout << p << endl;
    return 0;
}
