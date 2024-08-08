#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char *dados = (char*)malloc(10 * sizeof (char));
    int val, index;
    printf ("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Valor de divisibilidade\n2)Índice do programa\n\n");
    fgets (dados, 10, stdin);
    char *pt = strtok(dados, " ");
    val = atoi(pt);
    pt = strtok(NULL, " ");
    index = atoi(pt);
    for (int i = val; i <= index; i += val) {
        printf ("%d  ", i);
    }
    
    return 0;
}