#include <stdio.h>

int main(void)
{
    int number, reversed = 0;   // number : valeur entrée, reversed : nombre inversé

    
    scanf("%d", &number);  // Lire le nombre depuis l'utilisateur

    // Tant que le nombre n'est pas égal à 0
    while (number != 0)
    {
        int digit = number % 10;  // Extraire le dernier chiffre (reste de la division par 10)        
        reversed = reversed * 10 + digit; // Ajouter le chiffre extrait à la fin du nouveau nombre
        number /= 10;                   // Supprimer le dernier chiffre du nombre original  
    }

    printf("Nombre inversé : %d\n", reversed);  // Afficher le nombre inversé

    return 0;  // Fin du programme
}
