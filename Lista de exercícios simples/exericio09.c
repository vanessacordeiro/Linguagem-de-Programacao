#include <stdio.h>

int main()
{
    int n, x, y, z;
    y = 0;
    z = 0;
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    for (x = 1; y < n; x++)
    {
        y = (x * (x+1) * (x+2));
        if (y==n)
        {
            z = 1;
            break;
        }
    }
    if (z == 1)
    {
        printf("%d e' triangular", n);
    }else
    {
        printf("%d nao e' triangular", n);
    }
    return 0;
}
