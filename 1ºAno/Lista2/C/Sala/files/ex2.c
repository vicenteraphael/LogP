#include <stdio.h>

int main() {

    float n1, n2, e;
    printf ("Entre com as notas, vossa senhoria:\n");
    printf ("N1 = ");
    scanf ("%f", &n1);
    printf ("N2 = ");
    scanf ("%f", &n2);
    printf ("Média = %.2f\n", (n1 + n2) / 2);
    if ((n1 + n2) / 2 >= 6) {
        printf ("Aluno aprovado :)\n");
    }
    else {
        printf ("Infelizmente, precisaremos da nota de exame:\n");
        printf ("E = ");
        scanf ("%f", &e);
        printf ("Nova média = %.2f\n", (n1 + n2 + e) / 3);
        if ((n1 + n2 + e) / 3 >= 6) {
            printf ("Aluno aprovado em exame :)\n");
        }
        else {
            printf ("Aluno reprovado :(\n");
        }
    }

    return 0;
}