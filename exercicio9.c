#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media, ma;

    printf (" Informe a primeira nota do aluno: ");
    scanf ("%f", &nota1);
    printf (" Informe a segunda nota do aluno: ");
    scanf ("%f", &nota2);
    printf (" Informe a terceira nota do aluno: ");
    scanf ("%f", &nota3);
    printf("\n\n");
    media= (nota1 + nota2 + nota3 ) / 3;
    printf ("\n A média do aluno é de : >  %.2f  < ", media);
    ma= ( nota1 + nota2*2 + nota3*3 + media ) / 7;
    printf ("\n A média de aproveitamento do aluno é de : >  %.2f  <");
    printf ("\n\n");





    if (ma>=9)
        printf (" Tabela : A");
    else

    if (ma>=7.5 && ma<9)
        printf (" Tabela: B");
    else

    if (ma>=6 && ma<7.5)
        printf (" Tabela: C");
    else

    if (ma>=4 && ma<6)
        printf (" Tabela: D");
    else

    if (ma<6)
        printf(" Tabela: E");
    else
        printf (" Número inválido !");

    getch();
    return 0;
}


