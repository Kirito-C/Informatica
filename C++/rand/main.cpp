#include <iostream>

using namespace std;

int main() {
    int minimo = 1, random;
    bool maggiore = false;
    srand(time(NULL));
    while(random <= 1000) {
        random = rand() % 1000 + minimo;
        minimo = random;
        if(random > 1000)
            maggiore = true;
        cout << random << endl;
    }
    if (maggiore = false)
        cout << "Hai vinto!" << endl;
    else
        cout << "Hai perso!" << endl;
    return 0;
}
