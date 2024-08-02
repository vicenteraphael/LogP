#include <stdio.h>

int main() {

    float a, b, c;
    printf ("A = ");
    scanf ("%f", &a);
    printf ("B = ");
    scanf ("%f", &b);
    c = a;
    a = b;
    b = c;
    printf ("\nA = %.2f\nB = %.2f\n", a, b);

    return 0;
}