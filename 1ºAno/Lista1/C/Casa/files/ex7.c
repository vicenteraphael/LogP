#include <stdio.h>
#include <math.h>

int main() {

    float r;
    printf ("Raio (em cm): ");
    scanf ("%f", &r);
    printf ("Volume = %.2f cm³\nÁrea = %.2f cm²\n", (4 / 3) * M_PI * pow(r, 3), 4 * M_PI * pow(r, 2));

    return 0;
}