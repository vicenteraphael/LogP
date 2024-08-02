#include <stdio.h>

int main() {

    float tempo, espaco;
    printf ("Espaço (em km): ");
    scanf ("%f", &espaco);
    printf ("Tempo (em h): ");
    scanf ("%f", &tempo);
    printf ("Velocidade média = %.2f km/h\n", espaco / tempo);

    return 0;
}