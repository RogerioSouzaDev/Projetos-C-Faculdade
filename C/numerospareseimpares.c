#include <stdio.h>


int verificarParImpar(int numero) {
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int numeroInicial, numeroFinal;
    int quantidadePares = 0;


    printf("Digite o numero inicial: ");
    scanf("%d", &numeroInicial);

    printf("Digite o numero final: ");
    scanf("%d", &numeroFinal);

  
    if (numeroInicial > numeroFinal) {
        printf("O numero inicial deve ser menor ou igual ao numero final.\n");
        return 1;
    }


    for (int i = numeroInicial; i <= numeroFinal; i++) {
        if (verificarParImpar(i)) {
            printf("%d eh par.\n", i);
            quantidadePares++;
        } else {
            printf("%d eh impar.\n", i);
        }
    }


    printf("Quantidade total de numeros pares: %d\n", quantidadePares);

    return 0;
}