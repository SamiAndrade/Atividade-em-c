#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dados um n�mero natural n, exiba seu fatorial n!.
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int num , i, fat;
    //Lendo o n�mero
    printf (" Informe um n�mero natural:  ");
    scanf ("%d", &num);
    //Exibindo o fatorial
    fat = 1;
    for ( i= 2; i<=num; i++){
        fat= fat *= i ;
    }
        if (num>=0)
        printf ("\n O resultado da opera��o �: %d", fat);
        return 0;
}
