#include <stdio.h>

int main() {

    float seg;
    printf ("Segundos (t) = ");
    scanf ("%f", &seg);
    printf ("Metros (s) = %.2f\n", 2 + 3 * seg + 0.5 * 10 * (seg * seg));

    return 0;
}