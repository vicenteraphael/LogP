#include <stdio.h>

int main() {

    float dados[3];
    printf ("Entre com as notas:\n");
    printf ("P1: ");
    scanf ("%f", &dados[0]);
    printf ("P2: ");
    scanf ("%f", &dados[1]);
    printf ("Ativ: ");
    scanf ("%f", &dados[2]);
    printf ("Média = %.2f\n", (dados[0] * 4 + dados[1] * 4 + dados[2] * 2) / 10);

    return 0;
}