#include <stdio.h>

int main() {

    double a, b;
    printf ("A = ");
    scanf ("%lf", &a);
    printf ("B = ");
    scanf ("%lf", &b);
    if (a > b) {
        printf ("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
    }
    else {
        printf ("%.2lf - %.2lf = %.2lf\n", b, a, b - a);
    }

    return 0;
}