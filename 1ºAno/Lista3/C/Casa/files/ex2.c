#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    for (;;) {
        char *dados = (char*)malloc(10 * sizeof(char));
        int vals[3] = {0, 0, 0};
        for (;;) {
            printf ("Na mesma linha, entre, respectivamente, com os valores inteiros referentes a:\n\n1) Primeiro Número (a1)\n2) Último número (an | an < a1)\n3) Paridade dos termos (2 se forem pares e 1 se forem ímpares)\n\n");
            fgets (dados, 10, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                ++i;
                pt = strtok(NULL, " ");
            }
            if (vals[2] == 0 && vals[1] != vals[0]) {
                printf ("*Número(s) inválidos... Tente novamente\n*");
            }
            else {
                break;
            }
        }
        if (vals[0] == 0 && vals[1] == 0 && vals[2] == 0) {
            break;
        }
        if (vals[0] % 2 == 0 && vals[2] == 1 || vals[0] % 2 != 0 && vals[2] == 2) {
            vals[0] -= 1;
        }
        if (vals[1] % 2 == 0 && vals[2] == 1 || vals[1] % 2 != 0 && vals[2] == 2) {
            vals[1] -= 1;
        }
        printf ("Aqui estão os termos x | x %% 2 = %d, entre %d e %d:\n", vals[2], vals[0], vals[1]);
        while (vals[0] >= vals[1]) {
            printf ("%d ", vals[0]);
            vals[0] -= 2;
        }
        printf ("\n");
    }
    
    return 0;
}