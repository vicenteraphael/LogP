#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    for (;;) {
        char *dados = (char *)malloc(100 * sizeof (char));
        int n = 0, mult = 0;
        unsigned long long stop = 0, result = 0;
        for (;;) {
            printf ("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Valor de N\n2) Valor da multiplicação sucessiva\n3) Número de parada\n\n");
            fgets(dados, 100, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                if (i == 0) {
                    n = atoi(pt);
                }
                else if (i == 1) {
                    mult = atoi(pt);
                }
                else {
                    stop = atoi(pt);
                }
                pt = strtok(NULL, " ");
                ++i;
            }
            if (stop == 0 && mult != n || n == 0) {
                printf ("*Número(s) inválido(s)... Tente novamente*\n");
            }
            else {
                break;
            }
        }
        if (n == 0 && mult == 0 && stop == 0) {
            break;
        }
        for (int i = 1;; ++i) {
            result = n * pow(mult, i);
            if (result >= stop) {
                break;
            }
            printf ("%d * %d ^ %d = %llu\n", n, mult, i, result);
        }
    }
    return 0;
}