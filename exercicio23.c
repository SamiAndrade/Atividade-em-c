#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazene em um vetor, depois
o programa dever� apresentar na tela os n�meros na ordem inversa do qual foram digitados*/

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor_num[6], i;
    //Lendo os dados
    printf ("\n Informe o primeiro n�mero: ");
    scanf("%d", &vetor_num[0]);
    printf ("\n Informe o segundo n�mero: ");
    scanf("%d", &vetor_num[1]);
    printf ("\n Informe o terceiro n�mero: ");
    scanf("%d", &vetor_num[2]);
    printf ("\n Informe o quarto n�mero: ");
    scanf("%d", &vetor_num[3]);
    printf ("\n Informe o quinto n�mero: ");
    scanf("%d", &vetor_num[4]);
    printf ("\n Informe sexto n�mero: ");
    scanf("%d", &vetor_num[5]);
    printf ("\n\n");
    //Imprimir dados do vetor
    for ( i=5; i >= 0; i--){
        printf ("\n N�mero [ %d ] = %d", i, vetor_num[i] );
    }
}
