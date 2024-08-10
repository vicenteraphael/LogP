#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    for (;;) {
        char op[2];
        char* dados = (char*)malloc(20 * sizeof(char));
        double vals[2] = {0, 0};
        for (;;) {
            printf ("Escolha uma de nossas operações suportadas:\n+  -  *  /  **  S\nOP = ");
            scanf ("%s", op);
            if (op[0] == 'S' || op[0] == 's') {
                break;
            }
            fflush(stdin);
            printf ("Na mesma linha, entre com os dois números para a realização da operação:\n");
            fgets(dados, 20, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            break;
        }
        if (op[0] == 'S' || op[0] == 's') {
            break;
        }
        else if (op[0] == '+') {
            printf ("%.2lf + %.2lf = %.2lf\n", vals[0], vals[1], vals[0] + vals[1]);
        }
        else if (op[0] == '-') {
            printf ("%.2lf - %.2lf = %.2lf\n", vals[0], vals[1], vals[0] - vals[1]);
        }
        else if (op[0] == '*') {
            printf ("%.2lf * %.2lf = %.2lf\n", vals[0], vals[1], vals[0] * vals[1]);            
        }
        else if (op[0] == '/') {
            printf ("%.2lf / %.2lf = %.2lf\n", vals[0], vals[1], vals[0] / vals[1]);            
        }
        else if (op[0] == '^') {
            printf ("%.2lf ^ %.2lf = %.2lf\n", vals[0], vals[1], pow(vals[0], vals[1])); 
        }
    }
    return 0;
}