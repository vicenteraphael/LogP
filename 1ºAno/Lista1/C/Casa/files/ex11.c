#include <stdio.h>

int main() {

    float a, b;
    printf ("A = ");
    scanf ("%f", &a);
    printf ("B = ");
    scanf ("%f", &b);
    a += b;
    b = a - b;
    a -= b;
    printf ("\nA = %.2f\nB = %.2f\n", a, b);

    return 0;
}