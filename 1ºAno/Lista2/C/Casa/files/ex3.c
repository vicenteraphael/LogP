#include <stdio.h>
#include <math.h>

int main() {
    
    float n;
    printf ("Nota = ");
    scanf ("%f", &n);
    printf ("Nota arredondada = %.0f\n", round(n));
    
    return 0;
}