#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para simular um lançamento de dado
int lancarDado() {
    int face = rand() % 6 + 1; // Gera um número aleatório de 1 a 6
    
    // Mapeia o resultado do dado para os valores específicos
    if (face <= 2) {
        return 1;
    } else if (face <= 4) {
        return 2;
    } else {
        return 3;
    }
}

// Função para jogar uma partida de "Café ou Acarajé"
void jogarCafeOuAcaraje(int numJogadas) {
    char casas[6] = {'A', 'B', 'C', 'D', 'E', 'F'}; // Identificação das casas
    int posicao = 0; // Posição inicial do jogador
    
    // Realiza as jogadas
    for (int i = 1; i <= numJogadas; i++) {
        int lancamento = lancarDado(); // Lança o dado
        printf("Jogada %d: Dado: %d\n", i, lancamento);
        
        posicao += lancamento; // Atualiza a posição do jogador
        
        // Verifica se o jogador chegou à posição de vitória
        if (posicao >= 6) {
            printf("Parabens! Voce ganhou um acaraje!\n");
            return;
        }
        
        printf("Voce esta na casa %c\n", casas[posicao]);
    }
    
    printf("Fim do jogo. Voce nao alcancou a vitoria.\n");
}

int main() {
    int numPartidas;
    int numJogadas;

    // Define a semente do gerador de números aleatórios baseada no horário atual
    srand(time(NULL));
    
    printf("Bem-vindo ao jogo Cafe ou Acaraje!\n");
    
    // Solicita ao jogador o número de partidas desejado
    printf("Digite o numero de partidas: ");
    scanf("%d", &numPartidas);
    
    // Solicita ao jogador o número de jogadas desejado
    printf("Digite o numero de jogadas por partida: ");
    scanf("%d", &numJogadas);
    
    // Joga as partidas
    for (int i = 1; i <= numPartidas; i++) {
        printf("\n=== Partida %d ===\n", i);
        jogarCafeOuAcaraje(numJogadas);
    }
    
    return 0;
}