#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 int main(){

    setlocale(LC_ALL, "Portuguese");
    int n, i, j, k;;

    printf (" Insira o n�mero que deseja na pir�mide invertida: ");
    scanf ("%d", &n);
    if (  n % 2 != 0) {
            printf (" \n");
    } else {
        printf (" N�mero inv�lido");
        return 0;
    }


    for (i = n; i >= 1; i--)
    {

        for (j = n; j > i; j--) {
            printf(" ");
        }


        for (k = n; k < 2*i; k++ ) {
            printf("%d", n);
                }


        // move para a pr�xima linha
        printf("\n");
    }



    return 0;




}
