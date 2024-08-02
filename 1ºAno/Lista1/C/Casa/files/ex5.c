#include <stdio.h>

int main() {

    float m, h;
    printf ("Massa (em kg): ");
    scanf ("%f", &m);
    printf ("Altura (em m): ");
    scanf ("%f", &h);
    printf ("IMC = %.2f\n", m / (h * h));

    return 0;
}