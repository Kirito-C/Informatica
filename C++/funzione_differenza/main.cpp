#include <iostream>

using namespace std;

int fdifferenza(int n1, int n2, int n3) {
    int max_num = n1;
    if (n2 > max_num) {
        max_num = n2;
    }
    if (n3 > max_num) {
        max_num = n3;
    }

    int min_num = n1;
    if (n2 < min_num) {
        min_num = n2;
    }
    if (n3 < min_num) {
        min_num = n3;
    }

    return max_num - min_num;
}

int main() {
    int n1, n2, n3, differenza;
    cout << "Inserire i tre numeri: " << endl;
    cin >> n1 >> n2 >> n3;
    differenza = fdifferenza(n1, n2, n3);
    cout << "La differenza tra il numero più grande e il numero più piccolo è: " << differenza << endl;
    return 0;
}
