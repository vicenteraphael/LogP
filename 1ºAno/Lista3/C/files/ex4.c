#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    
    char *dados = (char *)malloc(100 * sizeof (char));
    int n, mult;
    unsigned long long stop, result;
    printf ("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Valor de N (menor/igual a 50)\n2) Valor da multiplicação sucessiva (menor/igual a 50)\n3) Número de parada (menor/igual 10^10)\n\n");
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
    for (int i = 1;; ++i) {
        result = n * pow(mult, i);
        if (result >= stop) {
            break;
        }
        printf ("%d * %d ^ %d = %llu\n", n, mult, i, result);
    }
    
    return 0;
}