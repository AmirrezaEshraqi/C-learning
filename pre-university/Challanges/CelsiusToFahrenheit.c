#include <stdio.h>

int main() {
    int celsius;
    scanf("%d", &celsius);
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%d Celsius = %.1f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
