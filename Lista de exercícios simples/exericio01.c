#include <stdio.h>

int main()
{
    int numero, x;
    printf("Digite uma sequencia de numeros inteiros nao-nulos (apenas 0, para sair):\n");
    scanf("%d", &numero);
while(numero!=0)
{
    x = numero*numero;
    printf("O quadrado do numero %d: %d\n", numero, x);
    printf("Digite uma sequencia de numeros inteiros nao-nulos (apenas 0, para sair):\n");
    scanf("%d", &numero);
}
return 0;
}
