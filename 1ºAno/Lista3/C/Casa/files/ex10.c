#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    for (;;) {
        char op[2];
        double vals[2] = {0, 0};
        for (;;) {
            printf ("Escolha uma de nossas operações suportadas:\n+  -  *  /  ^  S\nOP = ");
            scanf ("%s", op);
            getchar();
            if (op[0] != '+' && op[0] != '-' && op[0] != '*' && op[0] != '/' && op[0] != '^' && op[0] != 'S' && op[0] != 's') {
                printf ("*Operação inválida... Tente novamente*");
            }
            else {
                break;
            }
        }
        if (op[0] == 'S' || op[0] == 's') {
            break;
        }
        printf ("Na mesma linha, entre com os dois números para a realização da operação:\n");
        scanf ("%lf %lf", &vals[0], &vals[1]);
        if (op[0] == '+') {
            printf ("%.2lf + %.2lf = %.2lf\n\n", vals[0], vals[1], vals[0] + vals[1]);
        }
        else if (op[0] == '-') {
            printf ("%.2lf - %.2lf = %.2lf\n\n", vals[0], vals[1], vals[0] - vals[1]);
        }
        else if (op[0] == '*') {
            printf ("%.2lf * %.2lf = %.2lf\n\n", vals[0], vals[1], vals[0] * vals[1]);            
        }
        else if (op[0] == '/') {
            printf ("%.2lf / %.2lf = %.2lf\n\n", vals[0], vals[1], vals[0] / vals[1]);            
        }
        else if (op[0] == '^') {
            printf ("%.2lf ^ %.2lf = %.2lf\n\n", vals[0], vals[1], pow(vals[0], vals[1])); 
        }
    }
    printf ("\nAdeus!");
    return 0;
}