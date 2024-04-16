#include <iostream>
#include <string>

using namespace std;

void cifratura(const string &stringa, int n, string &s_cifra) {
    char carattere;
    for (int i = 0; i < stringa.size(); ++i) {
        carattere = stringa.at(i);
        if (carattere >= 'a' && carattere <= 'z') {
             s_cifra += 'a' + ('a' - carattere + n) % 26;
        } else if (carattere >= 'A' && carattere <= 'Z') {
             s_cifra += 'A' + ('A' - carattere + n) % 26;
        } else {
            s_cifra += carattere;
        }

        s_cifra += carattere;
    }
}

int main() {
    string s;
    string s_cifrata;
    int chiave;

    cout << "stringa?" << endl;
    cin >> s;
    cout << "chiave?" << endl;
    cin >> chiave;
    cifratura(s, chiave, s_cifrata);
    cout << "cifratura: " << s_cifrata << endl;
    return 0;
}
