#include <stdio.h>

int main()
{
    int p, x, y;
    x = 1;
    y = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &p);
    while (x<p)
    {
        if (p%x==0)
        {
            y++;
        }
        x++;
    }
    if (y==2)
    {
        printf("%d e' primo", p);
    }else
    {
        printf("%d nao e' primo", p);
    }
    return 0;
}
