#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main (void) {

    setlocale(LC_ALL, "Portuguese");
    int num1;

    printf("\n Digite o n�mero: ");
    scanf ("%i",&num1);

//programa deve informar se o n�mero � par, caso afirmativo informar tamb�m se � ou n�o maior que 15
//ou se o n�mero � �mpar, caso afirmativo informar se � ou n�o menor que 50.

     if ( num1 % 2 == 0 && num1 > 15)
        printf ("\n Esse n�mero � par. Esse n�mero � maior que 15");
     else
     if ( num1 % 2 == 0 && num1 < 15 )
        printf ("\n Esse n�mero � par. Esse n�mero � menor que 15");
     else

    if ( num1 % 2 != 0 && num1 > 50)
        printf ("\n Esse n�mero � �mpar. Esse n�mero � maior que 50.");
    else
    if ( num1 % 2 != 0 && num1 < 50)
        printf (" Esse n�mero � �mpar. Esse n�mero � menor que 50.");
    else;
}
