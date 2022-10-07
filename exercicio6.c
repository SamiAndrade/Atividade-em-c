#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float valor, inf10, valor2, inf20, valor3;

    printf (" Informe o valor do produto: ");
    scanf ("%f", &valor);

    switch ( valor < 100){
    case 1:
        printf ("\n O valor do produto sofrerá um acréscimo de 10%%. ");
        inf10= (valor * 10)/ 100;
        valor2= valor + inf10;
        printf ("\n O valor final do produto é: %.2f ", valor2);
        break;
    }
    switch ( valor >= 100){
    case 1:
        printf ("\n O valor do produto sofrerá um acréscimo de 20%%");
        inf20= (valor * 20) / 100;
        valor3= valor + inf20;
        printf ("\n O valor final do produto é %.2f", valor3);
        break;
    }

}
