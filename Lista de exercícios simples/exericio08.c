#include <stdio.h>

int main()
{
    int n, x, y, i, j, cont;
    x = 0;
    y = 0;
    cont = 1;
    printf("Digite quantidade de numeros multiplos: ");
    scanf("%d", &n);
    while(cont)
    {
        printf("Digite o primeiro numero diferente de 0: ");
        scanf("%d", &i);
        printf("Digite o segundo numero diferente de 0: ");
        scanf("%d", &j);
        if ((i!=0)&&(j!=0))
        {
            break;
        }
    }
    printf("Os %d primeiros numeros naturais multiplos de %d e %d:\n", n, i, j);
    while (x<n)
    {
        if((y%i==0)||(y%j==0))
        {
            printf("%d, ",y);
            x+=1;
        }
        y+=1;
    }
    return 0;
}
