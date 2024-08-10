#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    for (;;) {
        char *dados = (char*)malloc(10 * sizeof (char));
        int vals[3] = {0, 0, 0};
        for (;;) {
            printf ("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) 1º Número da sequência (a1)\n2) Último número da sequência (an < a1)\n3) Paridade dos termos da sequência (2 para pares e 1 para ímpares)\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 10, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            if (vals[2] == 0 && vals[1] != vals[0]) {
                printf ("*Número(s) inválidos... Tente novamente*\n");
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
            vals[1] += 1;
        }
        for (vals[0]; vals[0] >= vals[1]; vals[0] -= 2) {
            printf ("%d ", vals[0]);
        }
        printf ("\n");
    }
    
    return 0;
}