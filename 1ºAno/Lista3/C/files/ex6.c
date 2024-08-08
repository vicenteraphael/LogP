#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

    char *dados = (char*)malloc(10 * sizeof (char));
    printf ("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Número inicial da potenciação\n2) Número final da potenciação\n\n");
    fgets (dados, 10, stdin);
    char *pt = strtok(dados, " ");
    int a1 = atoi(pt);
    pt = strtok(NULL, " ");
    int an = atoi(pt);
    unsigned long long result;
    for (a1; a1 <= an; ++a1) {
        result = pow(3, a1);
        if (a1 > 0 && result == 0) {
            printf ("Perdão! A variável teve um aneurisma... Quero dizer, as variáveis em C não têm memória infinita...");
            break;
        }
        else if (a1 < 0) {
            printf ("3 ^ %d = %.5lf\n", a1, pow(3, a1));    
        }
        else {
            printf ("3 ^ %d = %llu\n", a1, result);
        }
    }

    return 0;
}