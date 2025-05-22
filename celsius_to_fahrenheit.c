#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;

    // Demander la température en Celsius
    printf("Entrez la température en °C : ");
    scanf("%f", &celsius);

    // Conversion en Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);
    return 0;
}
