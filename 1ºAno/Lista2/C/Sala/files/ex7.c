#include <stdio.h>

int main() {

    long x;
    scanf ("%ld", &x);
    if (x < 0) {
        printf ("%ld", x * -1);
    }
    else {
        printf ("%ld", x);
    }

    return 0;
}