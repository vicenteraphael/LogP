#include <stdio.h>

int main() {

    double f;
    printf ("°F = ");
    scanf("%lf", &f);
    printf ("%.2lf °F = %.2lf °C", f, (((f - 32) * 5) / 9));

    return 0;
}