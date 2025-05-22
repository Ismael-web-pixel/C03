#include <stdio.h>

int main(void)
{
    int limit;
    int a = 0, b = 1, next = 0;

    // Demander à l'utilisateur d'entrer une limite
    printf("Entrez la limite : ");
    scanf("%d", &limit);

    printf("Fibonacci : ");

    // Afficher la suite de Fibonacci jusqu'à ce que 'next' dépasse la limite
    while (next < limit)
    {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    printf("\n");
    return 0;
}
