#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "Portuguese");
    int decimal;


    printf (" Informe um número decimal que desejar converter em bases octal e hexadecimal: ");
    scanf ("%d", &decimal);
    printf ("\n");
    printf ("\n O número, em base decimal, declarado foi: %d ", decimal);
    printf ("\n O número, em base octal, é: %o", decimal);
    printf ("\n O número, em base hexadecimal, é: %x ", decimal);
    printf ("\n");
    printf (" Fim do programa !" );
}
