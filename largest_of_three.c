#include <stdio.h>

int main() {
    
    int x, y, z, Max;

 scanf("%d %d %d", &x, &y, &z);
        printf("Entrez trois entiers : ");

    Max = x;

    if (y > Max) 
    {
        Max = y;
    }

    if (z > Max) 
    {
        Max = z;
    }

    printf("Le plus grand est : %d\n", Max);

    return 0;
}
