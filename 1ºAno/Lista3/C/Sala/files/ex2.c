#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    for (;;) {
        char * dados = (char*)malloc(10 * sizeof (char));
        int vals[3];
        for (;;) {
            printf ("Entre, na mesma linha, com os seguintes valores, respectivamente:\n\n1) 1º número da sequência (a1)\n2) Último número da sequência (an)\n3) Divisibilidade dos termos\nPara sair, entre com 0 em todos os valores\n\n");
            fgets(dados, 10, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            if (vals[0] == 0 && vals[1] == 0 & vals[2] == 0) {
                break;
            }
            if (vals[2] == 0) {
                printf ("Número(s) inválidos... Tente novamente\n");
            }
            else {
                break;
            }
        }
        if (vals[0] == 0 && vals[1] == 0 & vals[2] == 0) {
            break;
        }
        if (vals[0] <= vals[1]) {
            if (vals[0] % vals[2] != 0) {
                vals[0] -= vals[0] % vals[2] - vals[2];
            }
            if (vals[1] % vals[2] != 0) {
                vals[1] -= vals[1] % vals[2];
            }
            printf ("Sn = %d\n\n", (vals[0] + vals[1]) * ((vals[1] - vals[0]) / vals[2] + 1) / 2);
        }
        else {
            if (vals[0] % vals[2] != 0) {
                vals[0] -= vals[0] % vals[2];
            }
            if (vals[1] % vals[2] != 0) {
                vals[1] -= vals[1] % vals[2] - vals[2];
            }
            printf ("Sn = %d\n\n", (vals[0] + vals[1]) * ((vals[0] - vals[1]) / vals[2] + 1) / 2);
        }
    }
    printf ("\nAdeus!");
    return 0;
}