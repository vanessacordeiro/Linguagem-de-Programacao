#include <stdio.h>

int main()
{
    int n, x, soma;
    x = 0;
    soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    while(x<=n)
    {
        if (x%2==0)
        {
            soma = soma + x;
        }
        x += 1;
    }
    printf("A soma dos numeros pares: %d", soma);
    return 0;
}
