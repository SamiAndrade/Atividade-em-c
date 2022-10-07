#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia.
//Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int nota1, nota2, nota3, nota4, nota5, nota6, total;
    nota1 = nota2 = nota3 = nota4 = nota5 = nota6 = 0;

    printf ("Informe o total do valor a ser sacado: ");
    scanf ("%d", &total);

    while ( total > 0){
        if((total / 100) > 0) {
            nota6 = total / 100;
            total -= nota6* 100;
        } else if((total / 50) > 0) {
            nota5 = total / 50;
            total -= nota5 * 50;
        } else if((total / 20) > 0) {
            nota4 = total / 20;
            total -= nota4 * 20;
        } else if((total / 10) > 0) {
            nota3 = total / 10;
            total -= nota3 * 10;
        } else if((total / 5) > 0) {
            nota2 = total / 5;
            total -= nota2 * 5;
        } else if((total / 1) > 0) {
            nota1 = total / 1;
            total = 0;
        }

    }

    printf ("\n A quantidade mínima para retirar o valor é de : [%d] notas de 1, [%d] notas de 5, [%d] notas de 10, [%d] notas de 20, [%d] notas de 50, [%d] notas de 100 ",
            nota1 , nota2, nota3, nota4, nota5, nota6 ) ;
}
