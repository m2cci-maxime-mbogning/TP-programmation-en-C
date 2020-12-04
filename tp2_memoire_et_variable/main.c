#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP2: Memoire et Variables\n ");

    int mediane = 4;
    printf("la median est de %d et prend en mémoire %d octets\n", mediane, sizeof(int));

    int long Max_poulet = 12;
    printf("le nombre max de poulet est de %ld et prend en mémoire %d octets\n", Max_poulet, sizeof(long));

    int short Min_poulet = 6;
    printf("le nombre min de poulet est de %d et prend en mémoire %d octets\n", Min_poulet, sizeof(short));

    float taille = 1.80;
    printf("le taille moyenne des basketeur est de %f et prend en mémoire %d octets\n", taille, sizeof(float));

    double taille_double = 13.9;
    printf("le seuil double est de %f et prend en mémoire %d octets\n", taille_double, sizeof(double));

    char nom = 'M';
    printf("tous les noms commencant par %c et prend en mémoire %d octets\n", nom, sizeof(char));


    return 0;
}
