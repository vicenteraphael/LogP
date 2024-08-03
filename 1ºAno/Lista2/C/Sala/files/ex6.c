#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;
    printf ("Entre com os valores dos coeficientes, vossa senhoria:\n");
    printf ("A = ");
    scanf ("%lf", &a);
    printf ("B = ");
    scanf ("%lf", &b);
    printf ("C = ");
    scanf ("%lf", &c);
    if (pow(b, 2) - 4 * a * c >= 0) {
        printf ("X' = %.2lf\n", (- b + pow(pow(b, 2) - 4 * a * c, 0.5)) / (2 * a));
        printf ("X'' = %.2lf\n", (- b - pow(pow(b, 2) - 4 * a * c, 0.5)) / (2 * a));
    }
    else {
        printf ("A equação não possui solução :(\n");
    }

    return 0;
}