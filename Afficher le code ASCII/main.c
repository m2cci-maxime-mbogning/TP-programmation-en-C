#include <stdio.h>
#include <stdlib.h>

int main()
{
    // déclaration des variables
    char lettre = ' ';

    // lecture de la saisie
    printf("Entrez une lettre: ");
    scanf("%c", &lettre);

    // Affichage des variable
    printf("\t- %d en decimal \n", (int)lettre);
    printf("\t- %x en hexacimal", (int)lettre);

    return 0;
}
