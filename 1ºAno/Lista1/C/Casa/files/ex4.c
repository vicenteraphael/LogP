#include <stdio.h>

int main() {

    float a, b;
    printf ("Entre com dois lados adjacentes do retângulo (base e altura):\n");
    printf ("Base (em cm) = ");
    scanf ("%f", &a);
    printf ("Altura (em cm) = ");
    scanf ("%f", &b);
    printf ("Área = %.2f cm²\nPerímetro = %.2f cm\n", a * b, a * 2 + b * 2);

    return 0;
}