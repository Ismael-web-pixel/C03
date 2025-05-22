#include <stdio.h>

int main() {
    int A, B, C, Max;

    printf("Entrer le premier nombre : ");
    scanf("%d", &A);
    printf("Entrer le deuxième nombre : ");
    scanf("%d", &B);
    printf("Entrer le troisième nombre : ");
    scanf("%d", &C);

    Max = A;

    if (B > Max) {
        Max = B;
    }

    if (C > Max) {
        Max = C;
    }

    printf("Le plus grand nombre est : %d\n", Max);

    return 0;
}
