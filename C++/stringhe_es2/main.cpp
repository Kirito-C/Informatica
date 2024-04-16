#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 1;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size() - 1; ++i) {
        for (int j = i + 1; j < s.size(); ++j) {
            if (s.at(i) == s.at(j)) {
                count++;
            }
            if (count > 1){
                cout << "lettera " << s.at(i) << " ripetuta " << count << " volte" << endl;
            }
            count = 1;
        }
    }
    return 0;
}
