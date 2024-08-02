# include <stdio.h>

int main() {

    float real;
    printf ("R$ = ");
    scanf ("%f", &real);
    printf ("R$ %.2f = US$ %.2f\n", real, real / 2.4);

    return 0;
}