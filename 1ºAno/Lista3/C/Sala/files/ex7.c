#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char *dados = (char*)malloc(10 * sizeof (char));
    int vals[3];
    unsigned long long result;
    printf ("Na mesma linha, entre com, respectivamente, os valores referentes a:\n\n1) Número da potência\n2) Índice inicial da potência\n3) Índice final da potência\n\n");
    fgets(dados, 10, stdin);
    int i = 0;
    char *pt = strtok(dados, " ");
    while (pt != NULL) {
        vals[i] = atoi(pt);
        pt = strtok(NULL, " ");
        ++i;
    }
    for (vals[1]; vals[1] <= vals[2]; ++vals[1]) {
        result = pow(vals[0], vals[1]);
        if (vals[1] > 0 && result == 0) {
            printf ("É amigo(a), infelizmente teremos que encerrar a conta por aqui. As variáveis em C não têm memória infinita...");
            break;
        }
        else if (vals[1] < 0) {
            printf ("%d ^ %d = %.5f\n",vals[0], vals[1],pow(vals[0], vals[1]));
        }
        else {
            printf ("%d ^ %d = %llu\n", vals[0], vals[1], result);
        }
    }
    return 0;
}