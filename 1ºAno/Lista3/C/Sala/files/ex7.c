#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    for (;;) {
        char *dados = (char*)malloc(10 * sizeof (char));
        int vals[3] = {0, 0, 0};
        unsigned long long result = 0;
        for (;;) {
            printf ("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Valor da base \n2) Índice inicial da potência\n3) Índice final da potência\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 10, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            break;
        }
        if (vals[0] == 0 && vals[1] == 0 && vals[2] == 0) {
            break;
        }
        if (vals[1] <= vals[2]) {
            for (vals[1]; vals[1] <= vals[2]; ++vals[1]) {
                result = pow(vals[0], vals[1]);
                if (vals[1] > 0 && result == 0) {
                    printf ("Perdão! A variável teve um aneurisma... Quero dizer, as variáveis em C não têm memória infinita...");
                    break;
                }
                else if (vals[1] < 0 || vals[2] < 0) {
                    printf ("%d ^ %d = %.5lf\n", vals[0], vals[1], pow(vals[0] , vals[1]));
                }
                else {
                    printf ("%d ^ %d = %llu\n", vals[0], vals[1], result);
                }
            }
        }
        else {
            for (vals[1]; vals[1] >= vals[2]; --vals[1]) {
                result = pow(vals[0], vals[1]);
                if (vals[1] > 0 && result == 0) {
                    printf ("Perdão! A variável teve um aneurisma... Quero dizer, as variáveis em C não têm memória infinita...");
                    break;
                }
                else if (vals[1] < 0 || vals[2] < 0) {
                    printf ("%d ^ %d = %.5lf\n", vals[0], vals[1], pow(vals[0] , vals[1]));
                }
                else {
                    printf ("%d ^ %d = %llu\n", vals[0], vals[1], result);
                }
            }
        }
        printf ("\n");
    }
    printf ("\nAdeus!");
    return 0;
}