#include <iostream>

int main() {
    const int MAX = 3;
    int m[MAX][MAX];

    int somma_diagonale1 = 0;
    int somma_diagonale2 = 0;

    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            std::cin >> m[i][j];
        }
    }

    for (int i = 0; i < MAX; ++i) {
        somma_diagonale1 += m[i][i];
    }

    int count = 0;

    for (int i = MAX; i > 0 ; i--) {
        somma_diagonale2 += m[count][i];
        count++;
    }

    if (somma_diagonale1 > somma_diagonale2) {
        std::cout << "la diagonale maggiore è quella da sinistra verso destra" << std::endl;
    } else if (somma_diagonale1 = somma_diagonale2) {
        std::cout << "la diagonali sono uguali" << std::endl;
    } else {
        std::cout << "la diagonale maggiore è quella da destra verso sinistra" << std::endl;
    }

    return 0;
}
