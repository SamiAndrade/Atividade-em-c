#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Codifique um programa que leia a quantidade de alunas e de alunos.
Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas.
Se essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos � igual a de alunas. */

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int alunos , alunas, total;

    //Lendo a quantidade de alunos e alunas;
    printf ("\n Informe uma quantidade de alunos: ");
    scanf ("%d", &alunos);
    printf ("\n Informe a quantidade de alunas: ");
    scanf ("%d", &alunas);
    //Verificando a maioria;
    if ( alunos > alunas){
        printf ("\n O n�mero de alunos � superior ao de alunas.");
    }else if ( alunas > alunos){
        total= alunos + alunas;
        printf ("\n O n�mero de alunas � superior ao de alunos. ");
        printf ("\n O n�mero total de alunos � : %d", total);
    }else {
        printf ("\n O n�mero de alunos e alunas � igual.");
    }
    return 0;
}
