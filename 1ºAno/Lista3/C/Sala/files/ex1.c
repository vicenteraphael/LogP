# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void impar(int inic, int para) {
    if (inic % 2 == 0) {
        inic += 1;
    }
    if (para % 2 == 0) {
        para -= 1;
    }
    if (inic <= para) {
        for (inic; inic <= para; inic += 2) {
            printf ("%d ", inic);
        }   
    }
    else {
    for (inic; inic >= para; inic -= 2) {
            printf ("%d ", inic);
        }
    }
}

int main() {
    for(;;) {
        char *dados = (char*)malloc(100 * sizeof (char));
        int vals[3] = {0, 0, 0};
        for (;;) {
            printf ("\nNa mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) 1º termo da sequência (a1)\n2) Último termo da sequência\n3) Divisibilidade dos termos (entre com 1 se forem ímpares)\n\nPara sair, entre com 0 em todos os valores\n\n");
            fgets (dados, 100, stdin);
            char *pt = strtok(dados, " ");
            int i = 0;
            while (pt != NULL) {
                vals[i] = atoi(pt);
                pt = strtok(NULL, " ");
                ++i;
            }
            if (vals[2] == 0 && vals[0] != vals[1]) {
                printf ("*Número(s) inválidos... Tente novamente*");
            }
            else {
                break;
            }
        }
        if (vals[0] == 0 && vals[1] == 0 && vals[2] == 0) {
            break;
        }
        if (vals[2] == 1) {
            printf ("Aqui estão os números ímpares, de %d até %d:\n", vals[0], vals[1]);
            impar(vals[0], vals[1]);
        }
        else if (vals[0] <= vals[1]) {
            printf ("Aqui estão os números divisíveis por %d, de %d até %d:\n", vals[2], vals[0], vals[1]);
            if (vals[0] % vals[2] != 0) {
                vals[0] -= vals[0] % vals[2] - vals[2];   
            }
            for (vals[0]; vals[0] <= vals[1]; vals[0] += vals[2]) {
                printf ("%d ", vals[0]);
            }
        }
        else {
            printf ("Aqui estão os números divisíveis por %d, de %d até %d:\n", vals[2], vals[0], vals[1]);
            if (vals[0] % vals[2] != 0) {
                vals[0] -= vals[0] % vals[2];   
            }
            for (vals[0]; vals[0] >= vals[1]; vals[0] -= vals[2]) {
                printf ("%d ", vals[0]);
            }
        }
        printf ("\n");
    }

    return 0;
}