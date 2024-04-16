#include <iostream>
#include <string>

using namespace std;

int main() {
    string p1;
    string p2;
    cout << "parola n.1?" << endl;
    cin >> p1;
    cout << "parola n.2?" << endl;
    cin >> p2;
    if (p1.at(0) <= p2.at(0))
        cout << p1 << endl;
    else
        cout << p2 << endl;
    return 0;
}
