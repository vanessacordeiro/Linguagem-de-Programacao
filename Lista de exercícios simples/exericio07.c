#include <stdio.h>

int main()
{
    int n, x, fatorial;
    x = 2;
    fatorial = 1;
    printf("Digite um numero inteiro nao-negativo n: ");
    scanf("%d", &n);
    while(x<=n)
    {
        fatorial = fatorial * x;
        x+=1;
    }
    printf("O resultado de %d!: %d", n, fatorial);
    return 0;
}
