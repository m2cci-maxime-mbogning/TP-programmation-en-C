#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age_utilisateur= 0;
    float taille_utilisateur =0.0;

    printf("Quel age avez vous?\n Quel taille faites vous?\n");
    scanf("%d  %f", &age_utilisateur, &taille_utilisateur);

    printf("J'ai %d ans et je mesure %f m\n", age_utilisateur, taille_utilisateur);

    return 0;
}
