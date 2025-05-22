#include <stdio.h>

int main(void)
{
    int number, original;
    int count = 0;

    scanf("%d", &number);

    original = number;


    if (number == 0)
    {
        count = 1;
    }
    else
    {
        while (number != 0)
        {
            number /= 10;
            count++;
        }
    }

    printf("%d contient %d chiffre(s).\n", original, count);
    return 0;
}
