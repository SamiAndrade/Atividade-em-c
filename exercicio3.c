#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "Portuguese");
    int decimal;


    printf (" Informe um n�mero decimal que desejar converter em bases octal e hexadecimal: ");
    scanf ("%d", &decimal);
    printf ("\n");
    printf ("\n O n�mero, em base decimal, declarado foi: %d ", decimal);
    printf ("\n O n�mero, em base octal, �: %o", decimal);
    printf ("\n O n�mero, em base hexadecimal, �: %x ", decimal);
    printf ("\n");
    printf (" Fim do programa !" );
}
