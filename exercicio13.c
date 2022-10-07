#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Dado um número positivo, crie um programa
 que escreva todos os números ímpares menores e/ou iguais a esse número e maiores ou igual a um.
 */
int main() {

    setlocale (LC_ALL, "Portuguese");
    unsigned int n;
    int x;

    printf ("\n Digite um número positivo: ");
    scanf ("%u", &n);

    printf ("\n Lista  dos números ímpares encontrados nesse número menores e/ou iguais a um: ");
    for ( x=1; x <= n; x+=2 ){
            printf ("%d ", x);

    }
    return 0;
}
