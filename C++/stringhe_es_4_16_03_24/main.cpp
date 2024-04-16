#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "s?" << endl;
    getline(cin, s);

    for (int i = 0; i < s.size(); ++i) {

        if (s.at(i) >= 'a' && s.at(i) <= 'z') {
            if (((int)s.at(i) - 96) % 2 == 0) {
                s.at(i) = '0';
            } else {
                s.at(i) = '1';
            }
        } else if (s.at(i) >= 'A' && s.at(i) <= 'Z') {
            cout << (int)s.at(i) - 64 << endl;
            if (((int)s.at(i) - 64) % 2 == 0) {
                s.at(i) = '0';
            } else {
                s.at(i) = '1';
            }
        }
    }

    cout << s << endl;
    return 0;
}
