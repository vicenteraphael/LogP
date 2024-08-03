#include <stdio.h>

int main() {

    float notas[4];
    printf ("Entre com as notas:\n");
    for (int i = 1; i <= 4; i++) {
        printf ("N%d = ", i);
        scanf ("%f", &notas[i - 1]);
    }
    printf ("Média final = %.2f", (notas[0] + notas[1] + notas[2] + notas[3]) / 4);

    return 0;
}