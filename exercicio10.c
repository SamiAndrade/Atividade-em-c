#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main (void) {

    setlocale(LC_ALL, "Portuguese");
    int num1;

    printf("\n Digite o número: ");
    scanf ("%i",&num1);

//programa deve informar se o número é par, caso afirmativo informar também se é ou não maior que 15
//ou se o número é ímpar, caso afirmativo informar se é ou não menor que 50.

     if ( num1 % 2 == 0 && num1 > 15)
        printf ("\n Esse número é par. Esse número é maior que 15");
     else
     if ( num1 % 2 == 0 && num1 < 15 )
        printf ("\n Esse número é par. Esse número é menor que 15");
     else

    if ( num1 % 2 != 0 && num1 > 50)
        printf ("\n Esse número é ímpar. Esse número é maior que 50.");
    else
    if ( num1 % 2 != 0 && num1 < 50)
        printf (" Esse número é ímpar. Esse número é menor que 50.");
    else;
}
