#include <stdio.h>

int main() {
    
    float a, b, c;
    printf ("Vossa senhoria deverá entrar com números, eu, sendo um mago da aritmética, deverei dizer qual deles é o maior, o menor, e o do meio.\n");
    printf ("1º número: ");
    scanf ("%f", &a);
    printf ("2º número: ");
    scanf ("%f", &b);
    printf ("3º número: ");
    scanf ("%f", &c);
    if (a > b && a > c) {
        printf ("Maior = %.2f\n", a);
    }
    else if (a > b && b < c || a > c && c < b) {
        printf ("Nº do meio = %.2f\n", a);
    }
    else {
        printf ("Menor = %.2f\n", a);
    }
    if (b > a && b > c) {
        printf ("Maior = %.2f\n", b);
    }
    else if (b > a && a < c || b > c && c < a) {
        printf ("Nº do meio = %.2f\n", b);
    }
    else {
        printf ("Menor = %.2f\n", b);
    }
    if (c > a && c > b) {
        printf ("Maior = %.2f\n", c);
    }
    else if (c > a && a < b || c > b && b < a) {
        printf ("Nº do meio = %.2f\n", c);
    }
    else {
        printf ("Menor = %.2f\n", c);
    }
    
    
    return 0;
}