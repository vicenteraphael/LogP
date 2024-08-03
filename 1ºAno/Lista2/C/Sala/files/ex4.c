#include <stdio.h>

int main() {

    double a, b, c;
    printf ("Entre com os lados do triangulo, vossa senhoria:\n");
    printf ("A = ");
    scanf ("%lf", &a);
    printf ("B = ");
    scanf ("%lf", &b);
    printf ("C = ");
    scanf ("%lf", &c);
    if (a < b + c && b < a + c && c < b + a) {
        if (a == b && b == c) {
            printf ("Os valores dados formam um triangulo equilátero\n");
        }
        else if (a == b || a == c || b == c) {
            printf ("Os valores dados formam um triangulo isósceles\n");
        }
        else {
            printf ("Os valores dados formam um triangulo escaleno\n");
        }
    }
    else {
        printf ("Os valores dados não formarm um triangulo :(\n");
    }

    return 0;
}