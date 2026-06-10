#include <stdio.h>

/* ====================================================================
   FUNÇÕES RECURSIVAS (Substituem os loops simples)
   ==================================================================== */

// Função recursiva para a Torre: se move em linha reta para a direita
void moverTorreRecursivo(int casas) {
    // Condição de parada (Caso Base)
    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    // Chamada recursiva diminuindo o número de casas restantes (Caso Recursivo)
    moverTorreRecursivo(casas - 1);
}

// Função recursiva para o Bispo: se move na diagonal (Cima Direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para a Rainha: se move em linha reta para a esquerda
void moverRainhaRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}


/* ====================================================================
   FUNÇÃO PRINCIPAL
   ==================================================================== */
int main() {
    // Constantes e variáveis de configuração de passos
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;

    // 1. MOVIMENTO DA TORRE (Recursivo)
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorreRecursivo(CASAS_TORRE);


    // 2. MOVIMENTO DO BISPO (Recursivo)
    printf("\n--- Movimento do Bispo (Recursivo) ---\n");
    moverBispoRecursivo(CASAS_BISPO);


    // 3. MOVIMENTO DO BISPO (Loops Aninhados: Vertical e Horizontal)
    // Conforme o requisito: loop externo controla a subida (vertical)
    // e o interno controla o avanço (horizontal) simultaneamente por casa.
    printf("\n--- Movimento do Bispo (Loops Aninhados) ---\n");
    for (int i = 0; i < CASAS_BISPO; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima ");
        }
        printf("Direita\n");
    }


    // 4. MOVIMENTO DA RAINHA (Recursivo)
    printf("\n--- Movimento da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(CASAS_RAINHA);


    /* ====================================================================
       5. MOVIMENTO DO CAVALO (Loops Complexos)
       Regra: Em "L", duas casas para CIMA e uma para a DIREITA.
       Lógica: Utilizamos um loop externo infinito 'for' controlado por 
       múltiplas variáveis (i, j) e condições internas com 'break' e 'continue'.
       ==================================================================== */
    printf("\n--- Movimento do Cavalo ---\n");
    
    // Inicialização de múltiplas variáveis de controle no for
    // i: passos para cima | j: passos para a direita
    for (int i = 0, j = 0; ; i++) {
        
        // Controle do movimento vertical (duas casas para cima)
        if (i < 2) {
            printf("Cima\n");
            continue; // Pula o restante do loop e força a próxima iteração vertical
        }
        
        // Controle do movimento horizontal (uma casa para a direita)
        if (j < 1) {
            printf("Direita\n");
            j++;
        }
        
        // Condição de parada complexa: se já subiu 2 e foi 1 para a direita, sai do loop
        if (i >= 2 && j >= 1) {
            break; 
        }
    }

    return 0;
}