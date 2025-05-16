#include <stdio.h>

/*
    Simulação de movimentos de peças de xadrez:
    - Torre: 5 casas para a direita (usando for)
    - Bispo: 5 casas na diagonal para cima e à direita (usando while)
    - Rainha: 8 casas para a esquerda (usando do-while)
*/

int main() {
    // Movimento da Torre: 5 casas para a direita (for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (while)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda (do-while)
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
