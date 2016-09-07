#include <stdio.h>

int main()
{
    int n, x, y;
    x = 1;
    y = 0;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);
    while (x<n)
    {
        if(n%x==0)
        {
            y = y + x;
        }
        x++;
    }
    if (y==n)
    {
        printf("%d e' perfeito", n);
    }else
    {
        printf("%d nao e' perfeito", n);
    }
    return 0;
}
