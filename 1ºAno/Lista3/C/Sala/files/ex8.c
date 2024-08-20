#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fibonacci(int i1, int i2) {
    unsigned long long x = 1, ant = 1, antsuc = 0;
    for (int i = 1; i <= i2; ++i) {
        if (i >= i1) {
            printf ("%dº = %llu\n", i, x);   
        }
        x = ant + antsuc;
        antsuc = ant;
        ant = x;
    }
    printf ("\n");
}

int main() {
    for (;;) {
        char *dados = (char*)malloc(50 * sizeof (char));
        long n1 = 0, n2 = 0;
        for (;;) {
            printf ("Na mesma linha, entre com os valores, repectivamente, referentes a:\n\n1) Índice inicial da sequência (i1)\n2) Índice final da sequência (in | in >= i1)\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 50, stdin);
            char *pt = strtok(dados, " ");
            n1 = atoi(pt);
            pt = strtok(NULL, " ");
            n2 = atoi(pt);
            if (n1 == 0 && n2 != 0 || n2 == 0 && n1 != 0) {
                printf ("*Número(s) inválido(s)... Tente novamente*\n");
            }
            else {
                break;
            }
        }
        if (n1 == 0 && n2 == 0) {
            break;
        }
        fibonacci(n1, n2);
    }
    printf ("\nAdeus!");
    return 0;
}