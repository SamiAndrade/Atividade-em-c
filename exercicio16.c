#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dados um número natural n, exiba seu fatorial n!.
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int num , i, fat;
    //Lendo o número
    printf (" Informe um número natural:  ");
    scanf ("%d", &num);
    //Exibindo o fatorial
    fat = 1;
    for ( i= 2; i<=num; i++){
        fat= fat *= i ;
    }
        if (num>=0)
        printf ("\n O resultado da operação é: %d", fat);
        return 0;
}
