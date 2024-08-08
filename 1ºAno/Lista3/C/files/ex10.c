#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char *dados = (char*)malloc(10 * sizeof (char));
    int vals[3];
    printf ("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) Divisibilidade por 2 dos termos da sequência: 0 se os termos forem pares e 1 se os valores forem ímpares\n2) Primeiro número da sequência (a1)\n3) Último número da sequência (an)\n\n");
    fgets(dados, 10, stdin);
    char *pt = strtok(dados, " ");
    int i = 0;
    while (pt != NULL) {
        vals[i] = atoi(pt);
        pt = strtok(NULL, " ");
        ++i;
    }
    if ((vals[0] == 0 && vals[1] % 2 != 0) || (vals[0] == 1 && vals[1] % 2 == 0)) {
        vals[1] += 1;
    }
    if ((vals[0] == 0 && vals[2] % 2 != 0) || (vals[0] == 1 && vals[2] % 2 == 0)) {
        vals[2] -= 1;
    }
    printf ("A soma dos valores n, tal que n %% 2 = %d, entre %d e %d é %d", vals[0], vals[1], vals[2], (vals[1] + vals[2]) * ((vals[2] - vals[1]) / 2 + 1) / 2);
    
    return 0;
}