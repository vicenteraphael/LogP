#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    for (;;) {
        char *dados = (char*)malloc(100 * sizeof(char));
        int vals[3] = {0, 0, 0};
        for (;;) {
            printf ("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) 1º Termo da sequência (a1)\n2) Último termo da sequência (an)\n3) Razão da sequência (r)\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 100, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            if (vals[0] == 0 && vals[1] == 0 && vals[2] == 0) {
                break;
            }
            else if (vals[2] == 0) {
                printf ("*Número(s) inválidos... Tente novamente\n*");
            }
            else {
                break;
            }
        }
        if (vals[0] == 0 && vals[1] == 0 && vals[2] == 0) {
            break;
        }
        if (vals[0] <= vals[1]) {
            do {
                printf ("%d é ", vals[0]);
                if (vals[0] % 2 == 0) {
                    printf ("par\n");
                }
                else {
                    printf ("ímpar\n");
                }
                vals[0] += vals[2];
            }
            while (vals[0] <= vals[1]);
        }
        else {
            do {
                printf ("%d é ", vals[0]);
                if (vals[0] % 2 == 0) {
                    printf ("par\n");
                }
                else {
                    printf ("ímpar\n");
                }
                vals[0] -= vals[2];
            }
            while (vals[0] >= vals[1]);
        }
        printf ("\n");
    }
    printf ("\nAdeus!");
    return 0;
}