#include <stdio.h>

int main()
{
    int fx, fy, fz, fn, x;
    x = 1;
    fx = 0;
    fy = 1;
    printf("Digite a posicao que deseja saber da sequencia: ");
    scanf("%d", &fn);
    while (x<fn)
    {
        fz = fy + fx;
        fx = fy;
        fy = fz;
        x++;
    }
    printf("O %d de Fibonacci: %d", fn, fy);
    return 0;
}
