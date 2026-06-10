#include <stdio.h>

int main() {
    // Variáveis de limite para os movimentos retos e diagonais
    int limiteTorre = 5;
    int limiteBispo = 5;
    int limiteRainha = 8;

    /* ====================================================================
       1. MOVIMENTO DA TORRE
       Estrutura: for
       Regra: 5 casas para a direita em linha reta.
       ==================================================================== */
    printf("--- Movimento da Torre ---\n");
    for (int passoTorre = 0; passoTorre < limiteTorre; passoTorre++) {
        printf("Direita\n");
    }


    /* ====================================================================
       2. MOVIMENTO DO BISPO
       Estrutura: while
       Regra: 5 casas na diagonal (Cima e Direita).
       ==================================================================== */
    printf("\n--- Movimento do Bispo ---\n");
    int passoBispo = 0;
    
    while (passoBispo < limiteBispo) {
        printf("Cima Direita\n");
        passoBispo++;
    }


    /* ====================================================================
       3. MOVIMENTO DA RAINHA
       Estrutura: do-while
       Regra: 8 casas para a esquerda em linha reta.
       ==================================================================== */
    printf("\n--- Movimento da Rainha ---\n");
    int passoRainha = 0;
    
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha < limiteRainha);


    /* ====================================================================
       4. MOVIMENTO DO CAVALO
       Estrutura: loops aninhados (for e while)
       Regra: Movimento em "L" (2 casas para baixo, 1 para a esquerda).
       Lógica: O loop 'for' externo controla os eixos do movimento (0 para 
       vertical, 1 para horizontal). O loop 'while' interno executa a 
       quantidade de passos correspondente a cada eixo.
       ==================================================================== */
    printf("\n--- Movimento do Cavalo ---\n");
    
    // O loop externo iterará 2 vezes (uma para a reta maior do 'L', outra para a menor)
    for (int eixo = 0; eixo < 2; eixo++) {
        
        int passosExecutados = 0; // Reinicia a contagem a cada novo eixo
        
        // Eixo 0: Movimento vertical (2 casas para baixo)
        if (eixo == 0) {
            while (passosExecutados < 2) {
                printf("Baixo\n");
                passosExecutados++;
            }
        } 
        // Eixo 1: Movimento horizontal perpendicular (1 casa para a esquerda)
        else {
            while (passosExecutados < 1) {
                printf("Esquerda\n");
                passosExecutados++;
            }
        }
    }

    return 0;
}