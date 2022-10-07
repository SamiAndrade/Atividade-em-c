#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");
    float fah, cel, kel = 0;

    printf ("\n Digite a temperatura em fahrenheit que deseja converter: ");
    scanf ("%f", &fah);

    cel= ( fah - 32 ) / 1.8;
    kel= cel + 273 ;

    printf (" A temperatura em fahrenheit informada é : %.2f", fah);
    printf (" °F ");
    printf (" \n");
    printf (" A temperatura em celsius informada é: %.2f", cel );
    printf (" °C ");
    printf (" \n");
    printf (" A temperatura em kelvin informada  é: %.2f", kel);
    printf (" K ");
    printf (" \n");
    printf (" Fim do programa ! ");




    return 0;
}
