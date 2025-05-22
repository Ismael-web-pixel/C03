#include <stdio.h>

int main(void)
{
    int number, original;   // number : la valeur à traiter, original : pour conserver la valeur d'origine
    int count = 0;          // Compteur de chiffres, initialisé à 0

    
    scanf("%d", &number);  // Lire un nombre entier saisi par l'utilisateur

    original = number;      // Sauvegarder la valeur d'origine pour l'affichage final

    
    if (number == 0)  // Cas particulier : si l'utilisateur entre 0
    {
    count = 1;  // 0 a 1 chiffre
    }
    else
    {
        
    while (number != 0)  // Boucle pour diviser le nombre par 10 à chaque étape
        {
        number /= 10;  // Supprime le dernier chiffre du nombre
        count++;       // Incrémente le nombre de chiffres comptés
        }
    }

    
    printf("%d contient %d chiffre(s).\n", original, count);  // Afficher le résultat

    return 0;  // Fin du programme
}

