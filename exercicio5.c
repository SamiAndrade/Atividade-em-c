#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{

    int a;
    printf ("\nTabela ASCII ( 0 - 127): ");
    printf ("\n\n");
    printf ("Decimal:\tHexa:\tCaractere:\n");
    for(a=0 ; a < 128; a++){
        printf ("\n");
        printf ("\t%d\t%x\t%c\t", a,a,a);
    }
}
