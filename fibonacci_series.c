#include <stdio.h>

int main(void)
{
    int limit, a = 0, b = 1, next = 0;

    //  Pour lire les 4 valeurs : limit, a, b, next
    scanf("%d %d %d %d", &limit, &a, &b, &next);

    printf("\n");

    // Pour afficher la suite de Fibonacci jusqu'à ce que 'next' dépasse la limite
    while (next < limit)
    {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("Fibonacci : ");
    
    return 0;
}
