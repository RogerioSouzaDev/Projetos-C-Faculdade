#include <stdio.h>

int main() {
    int matriz[3][3];

    printf("Digite os elementos da matriz de 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    printf("\nMatriz resultante (cada elemento multiplicado por cinco):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] *= 5; 
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0; 
}