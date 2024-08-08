#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *nums = (char*)malloc(100 * sizeof (char));
    printf ("Na mesma linha, entre com os números inteiros:\n");
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
    printf ("Maior valor = %d\nMenor valor = %d", maior, menor);
    
    return 0;
}