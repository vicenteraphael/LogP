#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    for (;;) {
        char *dados = (char*)malloc(100 * sizeof(char));
        double tab = 0;
        int index1, index2 = 0;
        for (;;) {
            printf ("Na mesma linha, entre com os valores referentes a:\n\n1) Número da tabuada (pode ser decimal ou inteiro)\n2) Índice inicial da tabuada\n3) Índice final da tabuada\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 100, stdin);
            char *pt = strtok(dados, " ");
            tab = atoi(pt);
            pt = strtok(NULL, " ");
            index1 = atoi(pt);
            pt = strtok(NULL, " ");
            index2 = atoi(pt);
            break;
        }
        if (tab == 0 && index1 == 0 && index2 == 0) {
            break;
        }
        if (index1 <= index2) {
            for (index1; index1 <= index2; ++index1) {
                printf ("%.2f X %d = %.2f\n", tab, index1, tab * index1);
            }
        }
        else {
            for (index1; index1 >= index2; --index1) {
                printf ("%.2f X %d = %.2f\n", tab, index1, tab * index1);
            } 
        }
        printf ("\n");
    }
    printf ("\nAdeus!");
    return 0;
}