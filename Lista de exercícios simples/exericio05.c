#include <stdio.h>

int main()
{
    int alunos, x, y, nota, max, min;
    x = 0;
    y = 0;
    max = 0;
    min = 10;
    printf("Digite o numero de alunos: ");
    scanf("%d", &alunos);
    while(x<alunos)
    {
        while(y==0)
        {
            printf("Digite a nota do aluno: ");
            scanf("%d", &nota);
            if ((nota>=0)&&(nota<=10))
            {
                y = 1;
            }
        }
        y = 0;
        if (nota>max)
        {
            max = nota;
        }
        if (nota<min)
        {
            min = nota;
        }
        x += 1;
    }
    printf("A maior nota: %d \nA menor nota: %d", max, min);
    return 0;
}
