#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    getline(cin, s);

    string palindromo;

    int count = (int)s.size() - 1;

    for (int i = 0; i < s.size(); ++i) {
        if (count >= 0){
            palindromo.push_back(s[count]);
            count--;
        }
    }

    cout << s << endl;
    cout << palindromo << endl;
    bool bb = false;

    for (int i = 0; i < s.size(); ++i) {
        if(s[i] != palindromo[i]) {
            bb = true;
        }
    }
    if (bb) {
        cout << "la parola non è un palindromo" << endl;
    } else {
        cout << "la parola è un palindromo" << endl;
    }

    return 0;
}
