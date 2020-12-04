#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("TP4: Complements sur les variables\n");

    //declaration des variables
    int rayon_cercle = 0;


    //lecture des informations
    printf("Entrez le rayon du cercle : ");
    scanf("%d", &rayon_cercle);

    //affichage des variables

    printf("Quel est le rayon du cercle ? %d\n", rayon_cercle);
    printf("Ce cercle à pour diametre %d\n", rayon_cercle*2);
    printf("Ce cercle à pour circonsference %f\n", (float)rayon_cercle*2*M_PI);
    printf("Ce cercle à pour aire %f\n", (float)rayon_cercle*rayon_cercle*M_PI);

    return 0;
}
