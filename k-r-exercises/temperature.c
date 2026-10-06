#include <stdio.h>
int main()
{
    float fahr, celcius;
    int step, lower, upper;
    lower = 0;
    step = 10;
    upper = 300;
    fahr = lower;
    while (fahr <= upper)
    {
        celcius = (5.0) * (fahr - 32.0) / (9.0);
        printf("%6.4f \t %6.4f \n", celcius, fahr);
        fahr = fahr + step;
    }
}