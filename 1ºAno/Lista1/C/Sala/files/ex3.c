#include <stdio.h>

int main() {

    float dados[2];
    printf ("Raio (em cm): ");
    scanf ("%f", &dados[0]);
    printf ("Altura (em cm): ");
    scanf ("%f", &dados[1]);
    printf ("Volume = %.2f cm³\n", 3.14159 * dados[0] * dados[0] * dados[1]);

    return 0;
}