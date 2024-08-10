#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    for (;;) {
        char *dados = (char*)malloc(10 * sizeof (char));
        int vals[3] = {0, 0, 0};
        for (;;) {
            printf ("Na mesma linha, entre com os valores inteiros referentes a:\n\n1) 1º Número da sequência\n2) Último número da sequência (an | an > a1)\n3) Razão da sequência (r)\nPara sair, entre com 0 em todos os valores\n\n");
            fgets(dados, 10, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                ++i;
                pt = strtok(NULL, " ");
            }
            if (vals[2] == 0 && vals[1] != vals[0]) {
                printf ("*Número(s) inválidos... Tente novamente\n*");
            }
            else {
                break;
            }
        }
        if (vals[0] == 0 && vals[1] == 0 && vals[2] == 0) {
            break;
        }
        while (vals[0] <= vals[1]) {
            printf ("%d é ", vals[0]);
            if (vals[0] % 2 == 0) {
                printf ("par\n");
            }
            else {
                printf ("ímpar\n");
            }
            vals[0] += vals[2];
        }
    }
    return 0;
}