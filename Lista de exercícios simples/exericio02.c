#include <stdio.h>

int main()
{
    int n, x, y;
    y = 0;
    x = 0;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);
    while(y<=n)
    {
        x = x + y;
        y += 1;
    }
    printf("A soma dos %d primeiros numeros naturais: %d\n", n, x);
return 0;
}
