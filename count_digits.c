#include <stdio.h>

int main(void)
{
    int number, original;
    int count = 0;

    // Lire le nombre depuis l'utilisateur
    printf("Entrez un nombre : ");
    scanf("%d", &number);

    original = number;

    // Gérer le cas où le nombre est 0
    if (number == 0)
    {
        count = 1;
    }
    else
    {
        // Compter les chiffres en divisant successivement par 10
        while (number != 0)
        {
            number /= 10;
            count++;
        }
    }

    printf("%d contient %d chiffre(s).\n", original, count);
    return 0;
}
