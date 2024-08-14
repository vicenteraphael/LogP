#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    for (;;) {
        char *nums = (char*)malloc(100 * sizeof (char));
        printf ("Na mesma linha, entre com os números inteiros, que eu irei dizer qual é o maior e o menor número\nPara sair, entre com 0\n\n");
        fgets (nums, 100, stdin);
        char *pt = strtok(nums, " ");
        int maior = atoi(pt), menor = atoi(pt);
        while (pt != NULL) {
            if (atoi(pt) > maior) {
                maior = atoi(pt);
            }
            if (atoi(pt) < menor) {
                menor = atoi(pt);
            }
            pt = strtok(NULL, " ");
        }
        if (maior == 0 && menor == 0) {
            break;
        }
        printf ("Maior valor = %d\nMenor valor = %d\n\n", maior, menor);
    }
    printf ("\nAdeus");
    return 0;
}