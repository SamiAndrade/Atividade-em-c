#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Implemente um programa que solicita as notas das duas provas feitas por cada um dos
alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a média das notas.
O programa deve parar imediatamente após ter sido digitado o valor 50 para a nota da primeira prova.*/

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1,nota2,media;

    // Interrupção;
    do{
    printf ("\n Digite 50 para interromper o programa : ");
    // Primeira nota
    printf ("\n Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    // Interrupção
    if ( nota1 == 50){
        break;}


    // Segunda nota
    printf(" Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    // Notas no intervalo de [0 - 10];
    if ( nota1 > 10 || nota2 > 10)
    {
        printf (" Nota inválida, favor digitar notas entre [0-10].");
        continue;
    }else
    {
    // Média
    media= (nota1 + nota2) / 2;
    printf (" A média do aluno é de: >  %.2f  <", media);
            }
        }
    while (1);
    getch();
    return 0;

    }




