#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, resultado, quantidade_jogadas;
    int lados[6] = {1, 1, 1, 2, 2, 3};

    // Inicializa a semente de números aleatórios
    srand(time(NULL));

    printf("Digite a quantidade de jogadas: ");
    scanf("%d", &quantidade_jogadas);

    printf("\n");

    for (i = 0; i < quantidade_jogadas; i++) {
        printf("Jogada %d:\n", i + 1);
        printf("Lancando o dado...\n");
        resultado = lados[rand() % 6];
        printf("O resultado do lancamento e: %d\n", resultado);
        printf("\n");
    }

    return 0;
}