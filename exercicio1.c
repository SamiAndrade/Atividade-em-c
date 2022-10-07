#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int num1 ,num2 ,soma, mult, quad, modulo = 0;
    double raiz, seno_dif ;


    printf (" ******** Calculadora ******** ");
    printf ("\n Digite o primeiro número: ");
    scanf ("%d", &num1);
    printf (" Digite o segundo número: ");
    scanf ("%d", &num2);
    printf("\n ====================");

    soma= num1 + num2;
    mult= ( num1 * num1) * ( num2^2);
    quad= pow(num1, 2);
    raiz= sqrt(pow(num1, 2) + pow(num2, 2));
    seno_dif= sin(num1 - num2);
    modulo= abs(num1);

    printf ("\n Os números informados foram : %d %d", num1, num2);
    printf ("\n A soma entre esse números resulta em: %d", soma);
    printf ("\n O produto do primeiro número pelo quadrado do segundo resulta em: %d", mult);
    printf ("\n O quadrado do primeiro número é: %d", quad);
    printf ("\n A raiz quadrada da soma dos quadrados é: %.2f", raiz);
    printf ("\n O seno da diferença do primeiro número pelo segundo é: %.2f", seno_dif);
    printf ("\n O módulo do primeiro número é: %d", modulo);

    printf("\n ====================");
    printf ("\n Fim do programa ! ");

}
