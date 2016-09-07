#include <stdio.h>

int main()
{
    int n, x, y;
    y = 0;
    x = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("Os %d primeiros numeros naturais: \n", n);
    while(y<n)
    {
        printf("%d, ", x);
        y += 1;
        x += 2;
    }
return 0;
}
