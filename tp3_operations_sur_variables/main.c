#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP3: operations sur variables\n");

    int taille_cote_carre = 0;
    int perimetre_carre = 0;
    int hauteur_rectangle = 0;
    int largeur_rectangle = 0;
    int perimetre_rectangle = 0;
    int surface_rectangle = 0;

    printf("Quel est la taille d un cote de carre ?\n" "Quel est la hauteur du rectangle ?\n" "Quel est la largeur du rectangle ?\n");
    scanf("%d %d %d", &taille_cote_carre, &hauteur_rectangle, &largeur_rectangle);

    printf("la taille d un cote de carre est de %d cm\n", taille_cote_carre);
    printf("Ce carre a pour perimetre %d cm\n", 4*taille_cote_carre);
    printf("Ce carre a pour surface %d cm2\n", taille_cote_carre*taille_cote_carre);

    printf("la hauteur du rectangle est de %d cm\n", hauteur_rectangle);
    printf("la largeur du rectangle est de %d cm\n", largeur_rectangle);
    printf("Ce rectangle a pour perimetre %d cm\n", 2*hauteur_rectangle + 2*largeur_rectangle);
    printf("Ce rectangle a pour surface %d cm2\n", hauteur_rectangle*largeur_rectangle);

    return 0;
}
