#include <stdio.h>

int main() {
    // Definição do número de casas que cada peça irá se mover
    int limiteTorre = 5;
    int limiteBispo = 5;
    int limiteRainha = 8;

    /* ====================================================================
       1. MOVIMENTO DA TORRE
       ==================================================================== */
    printf("--- Movimento da Torre ---\n");
    for (int passoTorre = 0; passoTorre < limiteTorre; passoTorre++) {
        printf("Direita\n");
    }


    /* ====================================================================
       2. MOVIMENTO DO BISPO
       ==================================================================== */
    printf("\n--- Movimento do Bispo ---\n");
    int passoBispo = 0; // Inicialização da variável de controle
    
    while (passoBispo < limiteBispo) {
        printf("Cima Direita\n");
        passoBispo++; // Incremento para evitar loop infinito
    }


    /* ====================================================================
       3. MOVIMENTO DA RAINHA
       ==================================================================== */
    printf("\n--- Movimento da Rainha ---\n");
    int passoRainha = 0; // Inicialização da variável de controle
    
    do {
        printf("Esquerda\n");
        passoRainha++; // Incremento para evitar loop infinito
    } while (passoRainha < limiteRainha);

    return 0;
}