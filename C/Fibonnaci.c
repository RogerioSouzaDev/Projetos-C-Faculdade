#include <stdio.h>

int i, num, n = 33, n2 = 55, n3;

int main(int argc, char const *argv[])
{
    printf("Sequencia de fibonnaci \n ");
    printf("Algoritmo por Rogerio Franco \n");
    printf("\n \n \n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        n3 = n + n2;
        n = n2;
        n2 = n3;

        printf("%d \n", n3);

    }
    

    return 0;
}
