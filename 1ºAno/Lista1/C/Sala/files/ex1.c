#include <stdio.h>

int main() {

    float dados[4];
    printf ("Tempo gasto (em h): ");
    scanf("%f", &dados[0]);
    printf ("Velocidade média (em km/h): ");
    scanf("%f", &dados[1]);
    dados[2] = dados[0] * dados[1];
    dados[3] = dados[2] / 12;
    printf ("\nTempo gasto: %.2f h\n", dados[0]);
    printf ("Velocidade média: %.2f km/h\n", dados[1]);
    printf ("Distância: %.2f km\n", dados[2]);
    printf ("Litros usados: %.2f\n", dados[3]);

    return 0;
}