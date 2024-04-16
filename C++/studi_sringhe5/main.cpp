#include <iostream>
#include <string>
#include <vector>

using namespace std;

int vocali(const string s) {
    int count = 0;
    vector <int> v = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if (s.at(i) == v.at(j))
                count++;
        }
    }

    return count;
}

int main() {
    string s;
    cout << "stringa?" << endl;
    cin >> s;
    cout << "ci sono " << vocali(s) << "." << endl;
    return 0;
}
