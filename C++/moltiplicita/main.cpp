#include <iostream>

void trovaFattorePrimoEMolteplicita(int numero) {
    int piuGrandeFattorePrimo = 0;
    int molteplicita = 0;
    int temp = 0;

    for (int i = 2; i <= numero; ++i) {
        molteplicita = 0;
        while (numero % i == 0) {
            // i è un fattore primo, aggiorna il più grande fattore primo e la molteplicità
            piuGrandeFattorePrimo = i;
            ++molteplicita;
            numero /= i;
        }
    }
    std::cout << "Il piu' grande fattore primo e' " << piuGrandeFattorePrimo << " con molteplicita' " << molteplicita << std::endl;
}

int main() {
    int numero;
    std::cout << "Inserisci un numero intero: ";
    std::cin >> numero;
    trovaFattorePrimoEMolteplicita(numero);
    return 0;
}
