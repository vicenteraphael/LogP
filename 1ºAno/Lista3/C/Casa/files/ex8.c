#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    for (;;) {
        char *dados = (char*)malloc(100 * sizeof(char));
        int vals[3] = {0, 0, 0};
        for (;;) {
            printf ("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) 1º Termo da sequência (a1)\n2) Último termo da sequência (an | an > a1)\n3) Divisibilidade dos termos da sequência\n\n");
            fgets (dados, 100, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            if (vals[2] == 0 && vals[0] != vals[1]) {
                printf ("*Número(s) inválido(s)... Tente novamente\n*");
            }
            else {
                break;
            }
        }
        if (vals[0] == 0 && vals[1] == 0 && vals[2] == 0) {
            break;
        }
        printf ("Aqui estão os termos divisíveis por %d, na faixa de %d até %d:\n", vals[2], vals[0], vals[1]);
        vals[0] -= vals[0] % vals[2];
        do {
            if (vals[0] >= vals[2]) {
                printf ("%d ", vals[0]);
            }
            vals[0] += vals[2];
        }
        while (vals[0] <= vals[1]);
        printf ("\n");
    }
    return 0;
}