#include <stdio.h>

int main() {
    
    float tab;
    int index1, index2;
    printf ("Entre com:\n1) Número da tabuada (pode ser decimal ou inteiro) = ");
    scanf ("%f", &tab);
    printf ("2) Índice inicial da tabuada = ");
    scanf ("%d", &index1);
    printf ("3)Índice final da tabuada = ");
    scanf ("%d", &index2);
    if (index1 <= index2) {
        for (index1; index1 <= index2; ++index1) {
            printf ("%.2f X %d = %.2f\n", tab, index1, tab * index1);
        }
    }
    else {
        for (index1; index1 >= index2; --index1) {
            printf ("%.2f X %d = %.2f\n", tab, index1, tab * index1);
        } 
    }
    
    return 0;
}