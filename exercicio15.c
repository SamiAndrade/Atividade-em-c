#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Faça um programa que mostre todos os números pares existentes entre 1 e 50. */

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf ("\n Os números pares entre 1 e 50 são: ");
    printf ("\n\n");
    for ( x=1 ; x<=50; x++ ){
    if ( x % 2 ==0){
        printf ("\n %d", x);
        printf ("\n");
    }else;


    }




    return 0;
}
