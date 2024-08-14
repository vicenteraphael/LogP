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
            printf ("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Valor da potencia \n2) Base inicial\n3) Base final\n\n");
            fgets (dados, 10, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            if (vals[1] == 0 && vals[2] != 0 || vals[2] == 0 && vals[1] != 0) {
                printf ("*Número(s) inválido(s)... Tente novamente\n*");
            }
            else {
                break;
            }
        }
        for (vals[1]; vals[1] <= vals[2]; ++vals[1]) {
            result = pow(vals[1], vals[0]);
            if (vals[1] > 0 && result == 0) {
                printf ("Perdão! A variável teve um aneurisma... Quero dizer, as variáveis em C não têm memória infinita...");
                break;
            }
            else if (vals[1] < 0) {
                printf ("3 ^ %d = %.5lf\n", vals[1], pow(vals[1] , vals[0]));    
            }
            else {
                printf ("3 ^ %d = %llu\n", vals[1], result);
            }
        }
    }
    return 0;
}