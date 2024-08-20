#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    for (;;) {
        char *dados = (char*)malloc(20 * sizeof (char));
        int vals[4] = {0, 0, 0, 0};
        for (;;) {
            printf ("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) Índice da potência\n2) Base inicial\n3) Base final\n4) Razão da sequência\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 20, stdin);
            char *pt = strtok(dados, " ");
            int  i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            if (vals[0] == 0 && vals[1] == 0 & vals[2] == 0 && vals[3] == 0) {
                break;
            }
            else if (vals[3] == 0) {
                printf ("*Número(s) inválido(s)... Tente novamente*\n");
            }
            else {
                break;
            }
        }
        if (vals[0] == 0 && vals[1] == 0 & vals[2] == 0 && vals[3] == 0) {
            break;
        }
        unsigned long long result;
            if (vals[1] <= vals[2]) {
                for (vals[1]; vals[1] <= vals[2]; vals[1] += vals[3]) {
                    result = pow(vals[1], vals[0]);
                    printf ("%d ^ %d = %llu\n", vals[1], vals[0], result);
                }
            }
            else {
                for (vals[1]; vals[1] >= vals[2]; vals[1] -= vals[3]) {
                    result = pow(vals[1], vals[0]);
                    printf ("%d ^ %d = %llu\n", vals[1], vals[0], result);
                }
            }
            printf ("\n");
    }
    printf ("\nAdeus!");
    return 0;
}