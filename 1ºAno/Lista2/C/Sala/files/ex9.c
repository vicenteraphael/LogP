#include <stdio.h>

int main() {
    
    int a, b;
    printf ("Entre com 2 números, dir-te-ei se há divisibilidade por 4 ou 5:\n");
    printf ("N1 = ");
    scanf ("%d", &a);
    printf ("N2 = ");
    scanf ("%d", &b);
    if (a % 4 == 0 || a % 5 == 0) {
        printf ("%d é divisível por 4 ou 5\n", a);
    }
    if (b % 4 == 0 || b % 5 == 0) {
        printf ("%d é divisível por 4 ou 5\n", b);
    }
    
    return 0;
}