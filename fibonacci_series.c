#include <stdio.h>

int main(void) {
    int limit;         // La limite maximale jusqu'à laquelle afficher la suite
    int a = 0, b = 1; // Les deux premiers nombres de la suite de Fibonacci
    int next = 0;     // La variable pour stocker le terme suivant de la suite


    scanf("%d", &limit);  // Lire la limite depuis l'entrée utilisateur

    printf("Fibonacci : "); // Affichage du début de la série

    // Tant que le prochain terme est inférieur à la limite
    while (next < limit) {
        printf("%d ", next);   // Afficher le terme actuel

        a = b;  // Décaler les valeurs : a prend la valeur de b
        b = next;  // b prend la valeur de next
        next = a + b; // Calculer le nouveau terme suivant
    }

    printf("\n");  // Saut de ligne après avoir affiché la série

    return 0;  // Fin du programme
}

