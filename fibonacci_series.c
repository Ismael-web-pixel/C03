#include <stdio.h>

int main(void) {
    int limit;
    int a = 0, b = 1, next = 0;


    scanf("%d", &limit);

    printf("Fibonacci : ");

    while (next < limit) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }

    printf("\n");
    return 0;
}

