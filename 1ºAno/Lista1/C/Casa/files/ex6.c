#include <stdio.h>
#include <math.h>

int main() {

    float r;
    printf ("Raio (em cm): ");
    scanf ("%f", &r);
    printf ("Área = %.2f cm²\nComprimento = %.2f cm", M_PI * pow(r, 2), 2 * M_PI * r);

    return 0;
}