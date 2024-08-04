#include <stdio.h>

int main() {

    long x;
    printf ("Entre com um número, que eu mostrarei o módulo do mesmo\nN = ");
    scanf ("%ld", &x);
    if (x < 0) {
        printf ("|%ld| = %ld", x, x * -1);
    }
    else {
        printf ("|%ld| = %ld", x, x);
    }

    return 0;
}