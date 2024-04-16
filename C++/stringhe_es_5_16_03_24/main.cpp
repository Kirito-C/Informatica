#include <iostream>
#include <string>

using namespace std;

void codifica(string &s) {
    int temp;
    int count = 0;
    if (s.at(0) != ' ') {
        string l = to_string((int)s.at(0));
        s.replace(0, l.size(),l);
    }

    for (int i = 1; i < s.size(); ++i) {
        if (s.at(i) == ' ') {
            do {
                count++;
            } while (s.at(i + count) == ' ');
            temp = (int)s.at(i + count);
            to_string(temp);
            s.at(i + count) = temp;
        }
    }
}

void decodifica(string &s) {
    int temp;
    int count = 0;
    if (s.at(0) != ' ') {
        temp = (int)s.at(0);
        string l = to_string((int)s.at(0));
        s.replace(0, l.size(),l);
    }

    for (int i = 1; i < s.size(); ++i) {
        if (s.at(i) == ' ') {
            do {
                count++;
            } while (s.at(i + count) == ' ');
            temp = (int)s.at(i + count);
            to_string(temp);
            s.at(i + count) = temp;
        }
    }
}

int main() {
    string s;
    string temp;
    string scelta = "";

    while (scelta != 'E') {
        cout <<"\t------------------" << endl;
        cout << "\tmenu:" << endl;
        cout << "\tA - exit" << endl;
        cout << "\tB - codifica" << endl;
        cout << "\tC - decodifica" << endl;
        cout <<"\t------------------" << endl;
        getline(cin, scelta);

        switch (scelta.at(0)) {
            default:
                cout << "non hai selezionato nulla" << endl;
                break;

            case 'A':
                scelta = 'E';
                break;

            case 'B':
                cout << "s?" << endl;
                getline(cin, s);
                codifica(s);
                cout << s << endl;
                break;

            case 'C':
                cout << "s?" << endl;
                getline(cin, s);
                decodifica(s);
                cout << s << endl;
                break;
        }
    }

    return 0;
}
