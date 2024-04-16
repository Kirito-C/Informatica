#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size() - 1; ++i) {
        if (s.at(i) == s.at(i + 1)) {
            cout << s.at(i) << s.at(i + 1) << " ";
        }
    }
    return 0;
}
