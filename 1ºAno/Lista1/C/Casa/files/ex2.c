#include <stdio.h>

int main() {

    float dolar;
    printf ("US$ = ");
    scanf ("%f", &dolar);
    printf ("US$ %.2f = R$ %.2f", dolar, dolar * 2.4);

    return 0;
}