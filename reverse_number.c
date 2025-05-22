#include <stdio.h>

int main(void)
{
    int number, reversed = 0;

    // Lire le nombre depuis l'utilisateur
    printf("Entrez un nombre : ");
    scanf("%d", &number);

    while (number != 0)
    {
        int digit = number % 10;          // Obtenir le dernier chiffre
        reversed = reversed * 10 + digit; // Construire le nombre inversé
        number /= 10;                     // Supprimer le dernier chiffre
    }

    printf("Nombre inversé : %d\n", reversed);
    return 0;
}
