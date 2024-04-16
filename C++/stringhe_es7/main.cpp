#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'a' && s[i] < 'z' && s[i] != ' ')
            s[i] = s[i] - 'a' + 'b';
        else if (s[i] = 'z') {
            s[i] = 'a';
        } else if(s[i] = 'Z') {
            s[i] = 'A';
        }
    }

    cout << s;
    return 0;
}
