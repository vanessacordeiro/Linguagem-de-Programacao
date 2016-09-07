#include <stdio.h>

int main()
{
    int x, y, cont, n;
    cont = 1;
    printf("Digite um numero inteiro como base: \n");
    scanf("%d", &x);
    printf("Digite um numero inteiro nao-negativo como expoente: \n");
    scanf("%d", &y);
    n = x;
    while(cont<y)
    {
        n = n * x;
        cont +=1;
    }
    printf("%d elevado a %d: %d", x, y, n);
return 0;
}
