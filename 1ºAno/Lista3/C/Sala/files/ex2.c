#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char * dados = (char*)malloc(10 * sizeof (char));
    int vals[3];
    printf ("Entre, na mesma linha, com os seguintes valores, respectivamente:\n\n1º número da sequência (a1)\nÚltimo número da sequência (an)\nNº de termos da sequência (n)\n\n");
    fgets(dados, 10, stdin);
    char *pt = strtok(dados, " ");
    int i = 0;
    while (pt != NULL) {
        vals[i] = atoi(pt);
        pt = strtok(NULL, " ");
        ++i;
    }
    printf ("Sn = %d", (vals[0] + vals[1]) * (vals[2] / 2));
    
    return 0;
}