#include <stdio.h>

int main() {

    float notas[3];
    printf ("Entre com as notas:\n");
    for (int i = 1; i <= 3; i++) {
        printf ("N%d: ", i);
        scanf ("%f", &notas[i - 1]);
    }
    printf ("Média = %.2f\n", (notas[0] + notas[1] + notas[2]) / 3);
    if ((notas[0] + notas[1] + notas[2]) / 3 >= 6) {
        printf ("Aluno aprovado :)\n");
    }
    else {
        printf ("Aluno reprovado :(\n");
    }

    return 0;
}