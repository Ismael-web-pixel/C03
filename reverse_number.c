#include <stdio.h>

int main(void)
{
    int number, reversed = 0;

    
    scanf("%d", &number);

    while (number != 0)
    {
        int digit = number % 10;          
        reversed = reversed * 10 + digit; 
        number /= 10;                     
    }

    printf("Nombre inversé : %d\n", reversed);
    return 0;
}
