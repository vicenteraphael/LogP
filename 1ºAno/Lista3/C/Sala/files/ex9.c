#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    for (;;) {
        char *dados = (char*)malloc(10 * sizeof (char));
        int base, index;
        unsigned long long result;
        for (;;) {
            printf ("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Base\n2) Expoente\nPara sair, entre com 0 em todos os valores\n\n");
            fgets(dados, 10, stdin);
            char *pt = strtok(dados, " ");
            base = atoi(pt);
            pt = strtok(NULL, " ");
            index = atoi(pt);
            break;
        }
        if (index == 0 && base == 0) {
            break;
        }
        if (index > 0 && result == 0) {
            printf ("Ops, parece que o programa infartou. As variáveis em C não têm memória infinita...");
        }
        else if (index < 0) {
            printf ("%d ^ %d = %.5lf\n", base, index, pow(base, index));
        }
        else {
            result = pow(base, index);
            printf ("%d ^ %d = %llu\n", base, index, result);
        }
    }
    printf ("\nAdeus!");
    return 0;
}