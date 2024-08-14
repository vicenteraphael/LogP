#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    for (;;) {
        char* dados = (char*)malloc(100 * sizeof(char));
        long vals[2] = {0, 0};
        double tab = 0;
        for (;;) {
            printf ("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Número da tabuada (podendo ser decimal ou inteiro)\n2) Índice inicial da tabuada\n3) Índice final da tabuada\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 100, stdin);
            char *pt = strtok(dados, " ");
            tab = atoi(pt);
            int i = 0;
            while (pt != NULL) {
                pt = strtok(NULL, " ");
                vals[i] = atoi(pt);
                ++i;
            }
            if (vals[1] == 0 && tab != vals[0]) {
                printf ("*Número(s) inválidos... Tente novamente\n*");
            }
            else {
                break;
            }
        }
        if (tab == 0 && vals[0] == 0 && vals[1] == 0) {
            break;
        }
        if (vals[0] < vals[1]) {
            for (vals[0]; vals[0] <= vals[1]; ++vals[0]) {
                printf ("%.2lf X %ld = %.2lf\n", tab, vals[0], tab * vals[0]);
            }
        }
        else {
            for (vals[0]; vals[0] >= vals[1]; --vals[0]) {
                printf ("%.2lf X %ld = %.2lf\n", tab, vals[0], tab * vals[0]);
            }
        }
    }
    printf ("\nAdeus!");
    return 0;
}