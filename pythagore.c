// Libraries
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    /*
        Programme qui calcule l'hypothénuse d'un triangle ABC, rectangle en B.
    */

    // déclaration des deux longueurs
    int ab;
    int bc;

    // premier longueur
    printf("Quelle est la longueur de AB (cm) ? ");
    scanf("%i", &ab);
    printf("AB : %i\n", ab);

    // deuxieme longueur
    printf("Quelle est la longueur de BC (cm) ? ");
    scanf("%i", &bc);
    printf("BC : %i\n", bc);

    // affichage du resultat (A² + C² = B²) => B = sqrt(A² + C²)
    printf("La longueur de l'hypoténuse est de %.2f cm.", sqrt(pow(ab, 2) + pow(bc, 2)));
}