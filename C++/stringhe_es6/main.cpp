#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int count = 1;
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == ' ') {
            count++;
        }
    }
    cout << "ci sono " << count << " parole" << endl;
    return 0;
}
