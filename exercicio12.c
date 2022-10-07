
#include <stdio.h>
#include <stdlib.h>
/* Fazer um programa para comparar a idade de Pedro, de Joana e de Ismael e a fim de saber quem é o mais velho.
 Eles possuem idades diferentes.
 */

int main ()
{
    int Pedro, Joana, Ismael;
        //Leitura de dados
        printf (" Informe a idade de Pedro: ");
        scanf ("%d", &Pedro);
        printf (" Informe a idade de Joana: ");
        scanf ("%d", &Joana);
        printf (" Informe a idade de Ismael: ");
        scanf ("%d", &Ismael);

        //Comparando dados
       if (Pedro>Joana && Pedro>Ismael){
            printf ("Pedro é o mais velho.");
       }else if (Joana>Pedro && Joana>Ismael){
           printf (" Joana é a mais velha.");
        }else if ( Ismael> Pedro && Ismael>Joana){
            printf (" Ismael é o mais velho.");
           }


}



