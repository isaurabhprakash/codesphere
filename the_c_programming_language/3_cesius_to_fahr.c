#include <stdio.h>

int main()
{

    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("celsius\tfahr\n");

    while (celsius <= upper)
    {

        fahr = ((9.0 / 5.0) * celsius) + 32;
        printf("%7.0f\t%3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}