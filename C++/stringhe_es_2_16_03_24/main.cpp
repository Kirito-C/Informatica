#include <iostream>
#include <string>

using namespace std;

void scambio(string &p1, string &p2) {
    char temp;
    temp = p2.at(p2.size() - 1);
    p2.at(p2.size() - 1) = p1.at(p1.size() - 1);
    p1.at(p1.size() - 1) = temp;

    temp = p2.at(p2.size() - 2);
    p2.at(p2.size() - 2) = p1.at(p1.size() - 2);
    p1.at(p1.size() - 2) = temp;
}

int main() {
    string p1;
    string p2;
    cout << "p1?" << endl;
    cin >> p1;
    cout << "p2" << endl;
    cin >> p2;

    scambio(p1, p2);

    cout << p1 << " " << p2 << endl;
    return 0;
}
