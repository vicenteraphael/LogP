#include <stdio.h>

int main() {

    int n;
    printf ("Nº do curso = ");
    scanf ("%d", &n);
    switch (n) {
        case 1:
            printf ("Engenharia\n");
            break;
        case 2:
            printf ("Edificações\n");
            break;
        case 3:
            printf ("Sistemas Elétricos\n");
            break;
        case 4:
            printf ("Turismo\n");
            break;
        case 5:
            printf ("Análise de Sistemas\n");
            break;
    }

    return 0;
}