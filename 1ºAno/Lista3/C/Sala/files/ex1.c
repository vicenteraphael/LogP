# include <stdio.h>
# include <stdbool.h>

int main() {

    while (true) {
        int pace, a1, an;
        printf ("\nDesejas saber os números:\n\n1) Pares\n2) Ímpares \n3) Sair\n\n");
        scanf ("%d", &pace);
        if (pace == 3) {
            break;
        }
        printf ("De: ");
        scanf ("%d", &a1);
        if ((a1 % 2 != 0 && pace == 1) || (a1 % 2 == 0 && pace == 2)) {
            a1 += 1;
        }
        pace = 2;
        printf ("Até: ");
        scanf ("%d", &an);
        printf ("Aqui está:\n");
        for (a1 = a1; a1 <= an; a1 += pace) {
            printf ("%d ", a1);
        }
    }

    return 0;
}