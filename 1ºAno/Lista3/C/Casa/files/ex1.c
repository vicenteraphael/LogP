#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    for (;;) {
        char *dados = (char*)malloc(10 * sizeof (char));
        int vals[3] = {0, 0, 0};
        for (;;) {
            printf ("Na mesma linha, entre com os valores inteiros, respectivamente, referentes a:\n\n1) 1º Número (a1)\n2) Último Número (an | an > a1)\n3) Razão da sequência (r)\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 10, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            if (vals[2] == 0 && vals[1] != vals[0]) {
                printf ("*Número(s) inválido(s)... Tente novamente*");
            }
            else {
                break;
            }
        }
        if (vals[0] == 0 && vals[1] == 0 && vals[2] == 0) {
            break;
            }
        printf ("Aqui estão os números de %d até %d, de %d em %d:\n", vals[0], vals[1], vals[2], vals[2]);
        while (vals[0] <= vals[1]) {
            printf ("%d ", vals[0]);
            vals[0] += vals[2];
        }
        printf ("\n");
    }
    return 0;
}