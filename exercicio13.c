#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Dado um n�mero positivo, crie um programa
 que escreva todos os n�meros �mpares menores e/ou iguais a esse n�mero e maiores ou igual a um.
 */
int main() {

    setlocale (LC_ALL, "Portuguese");
    unsigned int n;
    int x;

    printf ("\n Digite um n�mero positivo: ");
    scanf ("%u", &n);

    printf ("\n Lista  dos n�meros �mpares encontrados nesse n�mero menores e/ou iguais a um: ");
    for ( x=1; x <= n; x+=2 ){
            printf ("%d ", x);

    }
    return 0;
}
