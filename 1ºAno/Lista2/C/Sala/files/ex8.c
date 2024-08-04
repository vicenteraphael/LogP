#include <stdio.h>

int main() {
    
    int nums[3];
    printf ("Entre com 3 números inteiros, direi se há divisibilidade por 2 e 3:\n");
    for (int i = 0; i <= 2; i++) {
        printf ("N%d = ", i + 1);
        scanf ("%d", &nums[i]);
        if (nums[i] % 6 == 0) {
            printf ("%d é divisível por 2 e 3 :)\n", nums[i]);
        }
    }
    
    return 0;
}