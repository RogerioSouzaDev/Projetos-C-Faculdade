#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num, num2;
char i;

void main()
{

setlocale(LC_ALL, "Portuguese");

    printf("Selecione o tipo de calculo: +, -, *, /. \n");
    scanf("%c", &i);
    printf("Digite Um numero: \n");
    scanf("%d", &num);
    printf("Digite Outro numero: \n");
    scanf("%d", &num2);
    


    switch (i)
    {
    case '+' :
        printf("O resultado é: %d + %d = %d", num, num2,num + num2);
        break;   

    case '-':
        printf("O resultado é: %d - %d = %d", num, num2,num - num2);
    break;
    
    case '/':
        printf("O resultado é: %d / %d = %d", num, num2,num / num2);
    break;

    case '*':
        printf("O resultado é: %d * %d = %d", num, num2,num * num2);

    break;

    default:
        printf("Error!!");
        break;
    }      



    return 0;
}
