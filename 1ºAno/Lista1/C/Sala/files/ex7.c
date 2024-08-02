#include <stdio.h>

int main() {

    int coelho;
    printf ("Nº de coelhos = ");
    scanf ("%d", &coelho);
    printf ("Custo de criação = R$ %.2f\n", (coelho * 0.7) / 18 + 10);

    return 0;
}