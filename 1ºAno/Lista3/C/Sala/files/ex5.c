#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    for (;;) {
        char *dados = (char*)malloc(20 * sizeof (char));
        int val = 0, index = 0;
        for (;;) {
            printf ("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Valor de divisibilidade\n2) Índice do programa\n\n");
            fgets (dados, 20, stdin);
            char *pt = strtok(dados, " ");
            val = atoi(pt);
            pt = strtok(NULL, " ");
            index = atoi(pt);
            if (val == 0 && index != 0 || index == 0 && val != 0) {
                printf ("*Número(s) inválido(s)... Tente novamente*\n");
            }
            else {
                break;
            }
        }
        if (val == 0 && index == 0) {
            break;
        }
        printf ("Aqui estão os números n divisíveis por %d, tal que n < %d:\n", val, index);
        int cont = 1;
        for (cont = val; cont <= index; cont += val) {
            printf ("%d ", cont);
        }
        printf ("\n\n");
    }
    printf ("\nAdeus!");
    return 0;
}