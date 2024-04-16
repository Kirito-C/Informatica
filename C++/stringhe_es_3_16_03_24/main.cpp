#include <iostream>
#include <string>

using namespace std;

int main() {
    string p;
    char doppia;
    int codice = 0;
    cout << "p?" << endl;
    cin >> p;
    cout << p.at(1);
    for (int i = 0; i < p.size(); ++i) {
        if (i < p.size() && p.at(i) == p.at(i+1))
            doppia = p.at(i);
    }

    if (doppia >= 'a' && doppia <= 'z')
        codice = ((int)doppia - 96) * 3;
    else if (doppia >= 'A' && doppia <= 'Z')
        codice = ((int)doppia - 64) * 3;

    cout << codice << endl;
    return 0;
}
