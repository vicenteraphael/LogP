#include <stdio.h>

void fibonacci(int n) {
    unsigned long long x = 1;
    unsigned long long ant = 1;
    unsigned long long antsuc = 0;
    for (int i = 1; i <= n; ++i) {
        printf ("%dº = %llu\n", i, x);
        x = ant + antsuc;
        antsuc = ant;
        ant = x;
    }
}

int main() {
    
    int n;
    printf ("Índice da sequência de Fibonacci (1 a 100) = ");
    scanf ("%d", &n);
    fibonacci(n);
    
    return 0;
}