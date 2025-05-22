#include <stdio.h>

int main() {
    
     // Déclaration de 4 variables : 3 entiers à comparer + Max (le plus grand)
    int x, y, z, Max;

    scanf("%d %d %d", &x, &y, &z);  // Lire les 3 entiers saisis par l'utilisateur

    Max = x;  // On suppose que x est le plus grand au début

    if (y > Max)   // Comparer y avec Max
    {
        Max = y;   // Si y est plus grand que Max, y devient le nouveau Max
    }

    if (z > Max) // Comparer z avec le Max actuel
    {
        Max = z;  // Si z est plus grand que Max, z devient le nouveau Max
    }

    printf("Le plus grand nombre est : %d\n", Max);    // Afficher le résultat

    return 0;  // Fin du programme
}
