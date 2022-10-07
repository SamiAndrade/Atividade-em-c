#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor, depois
o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados*/

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor_num[6], i;
    //Lendo os dados
    printf ("\n Informe o primeiro número: ");
    scanf("%d", &vetor_num[0]);
    printf ("\n Informe o segundo número: ");
    scanf("%d", &vetor_num[1]);
    printf ("\n Informe o terceiro número: ");
    scanf("%d", &vetor_num[2]);
    printf ("\n Informe o quarto número: ");
    scanf("%d", &vetor_num[3]);
    printf ("\n Informe o quinto número: ");
    scanf("%d", &vetor_num[4]);
    printf ("\n Informe sexto número: ");
    scanf("%d", &vetor_num[5]);
    printf ("\n\n");
    //Imprimir dados do vetor
    for ( i=5; i >= 0; i--){
        printf ("\n Número [ %d ] = %d", i, vetor_num[i] );
    }
}
