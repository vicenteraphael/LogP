#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    char *dados = (char*)malloc(10 * sizeof (char));
    printf ("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Base\n2) Expoente\n\n");
    fgets(dados, 10, stdin);
    char *pt = strtok(dados, " ");
    int base = atoi(pt);
    pt = strtok(NULL, " ");
    int index = atoi(pt);
    unsigned long long result = pow(base, index);
    if (index > 0 && result == 0) {
        printf ("Ops, parece que o programa infartou. As variáveis em C não têm memória infinita...");
    }
    else if (index < 0) {
        printf ("%d ^ %d = %.5lf\n", base, index, pow(base, index));
    }
    else {
        printf ("%d ^ %d = %llu\n", base, index, result);
    }
    
    return 0;
}