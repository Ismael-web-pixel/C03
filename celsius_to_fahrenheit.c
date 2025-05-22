#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;  // Déclaration des variables

    scanf("%f", &celsius);  // Lire la température en Celsius depuis l'utilisateur

    fahrenheit = (celsius * 9 / 5) + 32;   // Calcul de la température en Fahrenheit

    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);   // Afficher le résultat avec une précision d'une décimale

    return 0;   // Fin du programme
}
