#include <stdio.h>

/* print Fahrenheit-Celusius
    for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 600;    /* upper limit */
    step = 20;      /* step size */      

    fahr = lower;
    printf("\nCelsius to Fahrenheit &&\n\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%6.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }       
}

