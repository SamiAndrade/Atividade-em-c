#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Fa�a um programa que mostre todos os n�meros pares existentes entre 1 e 50. */

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf ("\n Os n�meros pares entre 1 e 50 s�o: ");
    printf ("\n\n");
    for ( x=1 ; x<=50; x++ ){
    if ( x % 2 ==0){
        printf ("\n %d", x);
        printf ("\n");
    }else;


    }




    return 0;
}
