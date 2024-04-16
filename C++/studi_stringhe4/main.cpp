#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cout << "stringa?" << endl;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        cout << s.at(i);
        if (i != s.size() - 1)
            cout << "-";
    }
    return 0;
}
