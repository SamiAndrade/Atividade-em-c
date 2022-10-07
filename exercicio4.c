#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()

{
    setlocale (LC_ALL, "Portuguese");
    int a , b;
    printf ("\n Digite o primeiro valor: ");
    scanf ( " %d", &a);
    printf ("\n Digite o segundo número: ");
    scanf (" %d", &b);


    if ( a < b ){
            printf ("\n Lista dos valores em ordem crescente:  %d %d \n",a , b);

    }else
        if ( b < a){
            printf ("\n A lista dos valores em ordem decrescente: %d %d \n", b, a);
            printf ("\n");
    }   else
        if ( a = b ) {
            printf ("\n Valores iguais.");
    } else;
}
