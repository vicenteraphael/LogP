#include <stdio.h>

int main() {

    double a, b, c;
    printf ("Entre com os valores, vossa senhoria:\n");
    printf ("A = ");
    scanf ("%lf", &a);
    printf ("B = ");
    scanf ("%lf", &b);
    printf ("C = ");
    scanf ("%lf", &c);
    if (a <= b && b <= c && a <= c) {
        printf ("%.2lf, %.2lf, %.2lf", a, b, c);
    }
    else if (a <= c && c <= b && a <= b) {
        printf ("%.2lf, %.2lf, %.2lf", a, c, b);
    }
    else if (b <= a && a <= c && b <= c) {
        printf ("%.2lf, %.2lf, %.2lf", b, a, c);
    }
    else if (b <= c && c <= a && b <= a) {
        printf ("%.2lf, %.2lf, %.2lf", b, c, a);
    }
    else if (c <= a && a <= b && c <= b) {
        printf ("%.2lf, %.2lf, %.2lf", c, a, b);
    }
    else {
        printf ("%.2lf, %.2lf, %.2lf", c, b, a);
    }

    return 0;
}