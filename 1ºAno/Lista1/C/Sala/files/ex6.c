#include <stdio.h>

int main() {

    float dados[3];
    printf ("Valor (em R$): ");
    scanf ("%f", &dados[0]);
    printf ("Taxa (em %%): ");
    scanf ("%f", &dados[1]);
    printf ("Tempo (em meses): ");
    scanf ("%f", &dados[2]);
    printf ("Prestação = R$ %.2f\n", dados[0] + (dados[0] * (dados[1] / 100)) * dados[2]);

    return 0;
}