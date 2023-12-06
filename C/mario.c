#include <stdio.h>;

int i,rows,h,s;

int main(int argc, char const *argv[])
{
    do
    {
        printf("Altura desejada da piramide: \n");
        scanf("%d", &rows);
    } while (rows < 1 || rows > 8);
    
    for(i = 0;i < rows; i++){
        for ( s = rows - i; s > 1; s--)
        {
            printf(" ");
        }
        
        for(h = 0; h <= i; h++)
        {
            printf("#");
        }
    printf("\n");

   }


    return 0;
}
