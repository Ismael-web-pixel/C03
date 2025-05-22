#include <stdio.h>

int main() {
    
    int x, y, z, Max;

    scanf("%d %d %d", &x, &y, &z);  // ← lire les 3 nombres correctement

    Max = x;

    if (y > Max) 
    {
        Max = y;
    }

    if (z > Max) 
    {
        Max = z;
    }

    printf("Le plus grand nombre est : %d\n", Max);

    return 0;
}
