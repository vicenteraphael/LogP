#include <stdio.h>

int main() {
    
    int n;
    printf ("Entre com um número, eu, sendo um mágico da matemática, irei dizer se ele é par ou ímpar: ");
    scanf ("%d", &n);
    if (n % 2 == 0) {
        printf ("%d é par, meu nobríssimo usuário :)\n", n);
    }
    else {
        printf ("%d é ímpar, meu caríssimo colega :)\n", n);
    }
    
    return 0;
}